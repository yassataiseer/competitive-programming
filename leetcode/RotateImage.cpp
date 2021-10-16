// https://leetcode.com/problems/rotate-image/
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
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int length = matrix.size();
        vector <vector<int >> new_pos;
        for(int y=length-1;y>0;y--){
            new_pos.push_back(matrix[y]);
        }
        
        for(int y=0;y<length;y++){
            for(int x=0;x<length;x++){
                matrix[y][x] = new_pos[x][y];
            }
        }
    }
};

int main(){

}