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
        for(int i=0;i<length;i++){
            if(nums[i]-length==0){
                steps++;
                return steps;
            }
            if(i+1!=length){
                int current_i = i;
                if(i==0){
                    current_i=1;
                }
                if(nums[i+1]+current_i==length){
                    steps+=2;
                    return steps;
                }else{
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