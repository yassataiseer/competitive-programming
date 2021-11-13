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

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> answer;
        for(int i=0;i<temperatures.size();i++){
            answer.push_back(0);
        }
        map<int,int> temp;//first is value second is index
        map<int,int>::iterator it;
        for(int i=0;i<temperatures.size();i++){
            for(it = temp.begin();it!=temp.end();it++){
                if(it->first<temperatures[i]){
                    answer[it->second] = i-it->second;
                    temp.erase(it->first);
                }
            }
            temp[temperatures[i]] = i;           
        }        
        return answer;
    }
};


int main(){

    return 0;
}