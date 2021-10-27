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
    bool search(vector<int>& nums, int target) {
        int length = nums.size();
        if(nums[length-1]==target){
            return true;
        }else if(nums[length-1]<target){
            for(int i=length-1;i>0;i--){
                if(nums[i]==target){
                    return true;
                }
            }
        }else{
            for(int x:nums){
                if(x==target){
                    return true;
                }
            }
        }
        return false;
    }
};

int main(){

}