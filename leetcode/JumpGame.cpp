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
        int length = nums.size()-1;
        int steps = 0;
        int current_length = 0;
        for(int i=0;i<length;i++){
            if(current_length>=length){
                return steps;
            }
            else{
                if(nums[i]==0){}
                else{
                    current_length += nums[i];
                    steps++;
                }

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