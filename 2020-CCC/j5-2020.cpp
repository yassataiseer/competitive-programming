#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <map>
using namespace std;

map<int,int> possible(int x,int y,vector<vector<int> >data){
    map<int,int> posibilities;
    int init_val = data[x][y];
    for(int i=1;i<init_val;i++){
        if(init_val%i==0){
            posibilities[i] = init_val/i;
        }
    }
    return posibilities;
}

string solve(int rows,int columns,vector<vector<int> >data, map<int,int> posibilities ){
    map<int, int>::iterator it;
    for (it = posibilities.begin(); it != posibilities.end(); it++)
    {
        if(it->first<rows||it->second<columns){}
        else{
            if(it->first+1==rows&&it->second+1==columns){
                return "yes";
            }
            else{
                posibilities = possible(it->first,it->second,data);
                solve(rows,columns,data,posibilities);
            }
        }
    }


    return "no";
}


int main(){
    int rows;
    int columns;
    cin>>rows;
    cin>>columns;
    vector<vector<int> >data;
    for(int i=0;i<rows;i++){
        vector<int> current_data;
        for(int x=0;x<columns;x++){
            int value;
            cin>>value;
            current_data.push_back(value);
        }
        data.push_back(current_data);
    }
    
    map<int,int> posibilities = possible(0, 0,data);

    cout<<solve(rows,columns,data,posibilities )<<endl;
    return 0;
}