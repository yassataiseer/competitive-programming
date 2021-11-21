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
    int singleNonDuplicate(vector<int>& nums) {
        int leftptr = 0;
        int rightptr = nums.size()-1;

        while(rightptr>=leftptr){
            int mid = (leftptr+rightptr)/2;
            if(rightptr==leftptr){
                return nums[leftptr];
            } 
            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    leftptr = mid+1;
                }else{
                    rightptr = mid;
                   // [1,1,2,3,3,4,4,8,8]
                }
            }else{
                if(nums[mid]==nums[mid-1]){
                    leftptr = mid+1;
                }else{
                    rightptr = mid-1;
                }
            }
        }

        return -1;
    }
};

int main(){
    return 0;
}