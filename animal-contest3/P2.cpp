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

int solve(int size, int length, vector<int> values){
    sort(values.begin(),values.end());
    
    if(values[0]!=0){
        
        string answer;
        for(int x=0;x<size;x++){
            answer+=to_string(values[0]);
        
        }
        return stoi(answer); 
    }else{
        if (values.size()==1){
            return -1;
        }
        string answer;
        for(int x=0;x<size;x++){
            if(x==0||x==size-1){
                answer+=to_string(values[1]);
            }
            else{
                answer+=to_string(values[0]);
            }
        }
        
        return stoi(answer); 
        //[_,_,_,_,_,_]
    }
    

    return -1;
}

int main(){
    int size;
    int length;
    cin>>size>>length;
    set<int> values;
    for(int i=0;i<length;i++){
        int current_num;
        cin>>current_num;
        values.insert(current_num);
    }
    vector<int> vecVal(values.size());
    copy(values.begin(), values.end(), vecVal.begin());
    cout<<solve(size, length, vecVal)<<endl;
}