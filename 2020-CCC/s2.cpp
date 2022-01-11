#include <iostream>
#include <map>
#include <string>

#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
using namespace std;

bool exists=false;

vector<vector<int> >  getValues(int x,int maxX,int maxY){
    vector<vector<int> > values;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            vector<int> CurrentNum;
            CurrentNum.push_back(i);
            CurrentNum.push_back(x/i);
            values.push_back(CurrentNum);

        }
    }
    return values;
}

void Traverse(vector<vector<int> > grid,int x,int y, int maxX,int maxY){
    if(exists){
        return;
    }
    if(x==maxX&&y==maxY){
        exists=true;
        return;
    }    
   vector<vector<int> > combinations = getValues(grid[x-1][y-1],maxX,maxY);
   int i=0;
   for(vector<int> current:combinations){
       if(current[0]>maxX||current[1]>maxY){

       }
       else{
           i++;
           Traverse(grid,current[0],current[1],maxX,maxY);
       }
   }
   if(i==0){
       return;
   } 
}
int main(){
    int m,n;
    cin >> m;
    cin >> n;
    vector<vector<int> > grid;
    for(int i=0;i<m;i++){
        vector<int> row;
        for(int x=0;x<n;x++){
            int number;
            cin >> number;
            row.push_back(number);

        }
        grid.push_back(row);
    }

    Traverse(grid,1,1,m,n);
    if(exists){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}