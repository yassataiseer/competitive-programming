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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        for(vector<int> currentRow:matrix){
            int leftPtr = 0;
            int rightPtr = n-1;
            while(leftPtr<=rightPtr){
                if(target>currentRow[rightPtr]){
                    break;
                }else{
                    if(target==currentRow[rightPtr]||target==currentRow[leftPtr]){
                        return true;
                    }
                    int midPoint =(rightPtr+leftPtr)/2;
                    if(currentRow[midPoint]==target){
                        return true;
                    }
                    if(currentRow[midPoint]>target){
                        rightPtr =midPoint-1;
                    }else{
                        leftPtr = midPoint+1;
                    }
                }
                
            }
        }
        return false;
    }
};

int main(){
    return 0;
}