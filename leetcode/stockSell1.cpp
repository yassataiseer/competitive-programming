//Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
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

class Solution {
public: 
    int maxProfit(vector<int>& prices) {
        int maxProf = 0;
        for(int i=0;i<prices.size();i++){
            int maxVal = *max_element(prices.begin()+i,prices.end());
            maxVal = maxVal-prices[i];
            if(maxProf<maxVal){
                maxProf = maxVal;
            }
        }
        return maxProf;
    }
};

int main(){

    return 0;
}





