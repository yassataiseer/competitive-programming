#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <set>

using namespace std;


bool check( vector< vector<int> > Grid, int size){

    vector< vector<int> >Columns(size,vector<int> (size,0));
    for(int i=0;i<size;i++){
        vector<int> CurrentVector = Grid.at(i);
        vector<int> SortedVector = Grid.at(i);
        sort(SortedVector.begin(),SortedVector.end());
        if(!equal(CurrentVector.begin(),CurrentVector.end(),SortedVector.begin())){
            return false;
        }
        for(int j=0;j<CurrentVector.size();j++){
            Columns[j][i] = CurrentVector[j];
        }

    }
    for(int i=0;i<size;i++){
        vector<int> CurrentVector = Columns[i];
        vector<int> SortedVector = Columns[i];
        sort(SortedVector.begin(),SortedVector.end());
        if(!equal(CurrentVector.begin(),CurrentVector.end(),SortedVector.begin())){
            return false;
        }
    }
/*
321
753
964
*/
    return true;

}

vector< vector<int> > Solve( vector< vector<int> > Grid, int size){
    
    while(!check(Grid,size)){
        vector< vector<int> > newVector(size,vector<int> (size,0));
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                newVector[j][size-i-1] = Grid[i][j];
            }
        }
        Grid= newVector;
    }

    return Grid;   
}

int main(){
    int N;
    cin>>N;
    vector< vector<int> > Grid;
    for(int i=0;i<N;i++){
        vector<int> Row;
        for(int j=0;j<N;j++){
            int val;
            cin>>val;
            Row.push_back(val);
        }
        Grid.push_back(Row);
    }
    vector< vector<int> > answer = Solve(Grid,N);
    for(int i=0;i<N;i++){
        vector<int> Row;
        for(int j=0;j<N;j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}