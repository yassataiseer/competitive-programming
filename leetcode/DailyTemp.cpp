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
        map<int,int> temp;//second is value first is index
        map<int,int>::iterator it;
        for(int i=0;i<temperatures.size();i++){
            for(it = temp.begin();it!=temp.end();it++){
                if(it->second<temperatures[i]){
                    answer[it->first] = i-it->first;
                    temp.erase(it->first);
                }
            }
            temp[i] = temperatures[i];           
        }        
        return answer;
    }
};


int main(){

    return 0;
}