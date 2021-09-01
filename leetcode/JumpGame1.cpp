//link: https://leetcode.com/problems/jump-game/
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
    bool canJump(vector<int>& nums) {
        int length = nums.size();
        if(length <2){
            return true;
        }
        int max_pos = nums[0];
        if(max_pos==0){
            return false;
        }
        for(int i=1;i<length;i++){
            if(max_pos<=i&&nums[i]==0){
                return false;
            }

            if(max_pos<i+nums[i]){
                max_pos = nums[i]+i;
            }
            if(max_pos>=length-1){
                return true;
            }
        }
   

        return false;
    }
};