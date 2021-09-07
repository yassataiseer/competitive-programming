//link: https://leetcode.com/problems/search-in-rotated-sorted-array/
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
    int search(vector<int>& nums, int target) {
        int min_num = *min_element(nums.begin(),nums.end());

        int leftptr = 0;
        int rightptr = nums.size()-1;
        int last_number = nums[rightptr];
        int checkleft = 0;
        int checkright = nums.size()-1;
        while(true){
            cout<<leftptr<<endl;
            cout<<rightptr<<endl;
            if(nums[rightptr]==target){
                return rightptr;
            }
            if(nums[leftptr]==target){
                return leftptr;
            }
            if(rightptr<=leftptr){
                return -1;
            }
            if(nums[rightptr]>target&&nums[rightptr]>=min_num){
                leftptr+=(rightptr-leftptr)/2;
                if(leftptr==0){
                    return -1;
                }
            }
            else if(nums[rightptr]>target){
                leftptr+=(rightptr-leftptr)/2;
            }
            else if(nums[rightptr]<target){
                leftptr = rightptr;
                rightptr = nums.size()-1;
            }

            if(leftptr!=checkleft||rightptr!=checkright){
                checkleft = leftptr;
                checkright = rightptr;
            }else{
                return -1;
            }


        }

        return -1;
    }
};



