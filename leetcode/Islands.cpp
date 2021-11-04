// Problem: https://leetcode.com/problems/number-of-islands/


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
    int numIslands(vector<vector<char>>& grid) {
        int length = grid.size();
        int width = grid[0].size();
        int answer = 0;

        vector<string> coordinates;
        for(int m=0; m<length;m++){
            for(int n=0;n<width;n++){
                if(grid[m][n]=='1'){
                    string possible1;
                    possible1 = to_string(m-1)+to_string(n);
                    string possible2;
                    possible2 = to_string(m+1)+to_string(n);                    
                    string possible3;
                    possible3 = to_string(m)+to_string(n-1);   
                    string possible4;
                    possible4 = to_string(m)+to_string(n+1);   

                    if(find(coordinates.begin(), coordinates.end(), possible1) != coordinates.end())
                    {}
                    else if(find(coordinates.begin(), coordinates.end(), possible2) != coordinates.end())
                    {}
                    else if(find(coordinates.begin(), coordinates.end(), possible3) != coordinates.end())
                    {}        
                    else if(find(coordinates.begin(), coordinates.end(), possible4) != coordinates.end())
                    {}else{
                        answer++;
                    }
                    coordinates.push_back(to_string(m)+to_string(n));
                }
            }
        }
        return answer;
    }
};



int main(){

    return 0;
}