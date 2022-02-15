//better implementation 

#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <stack>

using namespace std;



int solve(vector<int> Dmojistan,vector<int> Pegland, bool maxopt){
    int answer = 0;
    sort(Dmojistan.begin(),Dmojistan.end());
    sort(Pegland.begin(),Pegland.end());
    if(maxopt){
        reverse(Pegland.begin(),Pegland.end());
    }
    for(int i=0;i<Dmojistan.size();i++){
         answer+= max(Dmojistan[i],Pegland[i]);
 

    }

    return answer;    
}


int main(){
    int type;
    cin >> type;
    int citizens;
    cin >> citizens;
    vector<int> Dmojistan;
    vector<int> Pegland;

    for(int i=0;i<citizens;i++){
        int num;
        cin >> num;
        Dmojistan.push_back(num);
    }
    for(int x=0;x<citizens;x++){
        int num1;
        cin >> num1;
        Pegland.push_back(num1);
    }
    bool max = false;
    if(type!=1){
        max = true;
    }
    cout<<solve(Dmojistan,Pegland,max)<<endl;
    return 0;
}