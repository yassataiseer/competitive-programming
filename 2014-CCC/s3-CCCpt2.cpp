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


char solve(vector<int> bridge, int bridgeSize){
    stack<int> bridgeCars;
    stack<int> doneCars;
    
    int smallest_num = *min_element(bridge.begin(),bridge.end());

    for(int i=0; i<bridgeSize;i++){


        if(bridge[i]==smallest_num){
            doneCars.push(bridge[i]);
            smallest_num+=1;
        }
        else{
            if(bridgeCars.empty()){
                bridgeCars.push(bridge[i]);
            }
            else{
                if(bridgeCars.top()==smallest_num){
                    doneCars.push(bridgeCars.top());
                    smallest_num+=1;
                }
                else if(bridgeCars.top()<bridge[i]){
                    return 'N';
                }else{
                    bridgeCars.push(bridge[i]);
                }
            }
        }
    }
    return 'Y';
}
int main(){
    int test_cases;
    cin>>test_cases;
    vector<vector<int> > bridges;
    for(int i=0;i<test_cases;i++){
        int size;
        cin>>size;
        vector<int> current_bridge;
        for(int x=0;x<size;x++){
            int value;
            cin>>value;
            current_bridge.push_back(value);
        }
        reverse(current_bridge.begin(),current_bridge.end());
        bridges.push_back(current_bridge);
    }
    for (vector<int> current_bridge:bridges){
        cout<<solve(current_bridge,current_bridge.size())<<endl;
    }
    return 0;
}
/*
reverse this vector
find smallest value from vector

loop through current vector
if value is not the smallest:
    push to the side bridge via a stack
else:
    put to the lake and remove value from vector
    if the next value(currentval+1) is at the top of the bridge stack

*/

