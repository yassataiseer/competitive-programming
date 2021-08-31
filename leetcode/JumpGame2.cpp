//link: https://leetcode.com/problems/jump-game-ii/
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
    int jump(vector<int>& nums) {

        int length = nums.size();
        if(length<2){
            return 0;
        }
        int steps = 1;
        int max_steps = nums[0];
        int max_pos = nums[0];

        for(int i=1;i<length;i++){
            if(max_steps<i){
                steps++;
                max_steps = max_pos;
            }
            if(max_pos<nums[i]+i){
                max_pos = nums[i]+i;
            }
        }
        return steps;
    }
};

int main(){

    return 0;
}

/*

*/