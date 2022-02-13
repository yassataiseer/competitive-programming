
#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<numeric>
#include<algorithm>
#include<iterator> 

using namespace std;

bool check(vector< vector<int> > array){
    int size = array[0].size();
    vector< vector<int> > horizontalArray(size,vector<int>(size));
    vector< vector<int> > verticalArray(size,vector<int>(size));
    for(int m=0;m<array.size();m++){

        for(int n=0;n<array[0].size();n++){
            horizontalArray[m][n] = array[m][n];
            verticalArray[m][n]= array[n][m];
        }
    }
    for(int i=0;i<size;i++){
        vector<int> horizontal;
        vector<int> verticle;
        copy(horizontalArray[i].begin(),horizontalArray[i].end(),back_inserter(horizontal));
        copy(verticalArray[i].begin(),verticalArray[i].end(),back_inserter(verticle));
        sort(horizontal.begin(),horizontal.end());
        sort(verticle.begin(),verticle.end());
        if(horizontal!=horizontalArray[i]){
            return false;
        }
        if(verticle!=verticalArray[i]){
            
            return false;
        }
    }
    return true;
}

void solve(vector< vector<int> > array){
    while(!check(array)){
       vector< vector<int> > newArray(array.size());
        for(int n=array.size()-1;n>=0;n--){
            for(int m=0;m<array.size();m++){
                newArray[m].push_back(array[n][m]);
            }        
        }
        array = newArray; 
    }
    for(vector<int> row: array){
        for(int nums:row){
            cout<<nums<<" ";
        }
        cout<<endl;
    }

}
int main(){
    int N;
    cin>>N;
    vector< vector<int> > array;
    for(int i=0;i<N;i++){
        vector<int> row;
        for(int x=0;x<N;x++){
            int num;
            cin>>num;
            row.push_back(num);
        }
        array.push_back(row);
    }
    solve(array);
    return 0;
}