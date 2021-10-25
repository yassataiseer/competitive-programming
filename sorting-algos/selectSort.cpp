#include <iostream>
#include <map>
#include <string>
#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
#include <set>
#include <stack>
using namespace std;


void sort(vector<int> data, int length){
    
    for(int i=0;i<length;i++){
        int min_val_index=i;
        for(int x=0;x<length;x++){
            if(data[x]<data[min_val_index]){
                min_val_index = x;
            }
            int prev_val = data[i];
            data[i]=data[min_val_index];
            data[min_val_index] = prev_val;
        }
    }
    cout<<"{";
    for(int i=0;i<length;i++){
        cout<<data[i]<<",";
    }
    cout<<"}"<<endl;
}

int main(){
    vector<int> data={45,500,12,99,3,0};
    sort(data,data.size());
    return 0;
}

// to run:
//g++ -std=c++11 selectSort.cpp
//./a.out