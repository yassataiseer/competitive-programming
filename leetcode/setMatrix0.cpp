// https://leetcode.com/problems/set-matrix-zeroes/
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
    void setZeroes(vector<vector<int> >& matrix) {
        int height = matrix.size();
        int width = matrix[0].size();
        set<int> rows;
        set<int> columns;
        set<int>::iterator it;
        for(int h=0;h<height;h++){
            for(int w=0;w<width;w++){
                if(matrix[h][w]==0){
                    columns.insert(h);
                    rows.insert(w);
                }
            }
        }
        for (const int &number : rows){
            for(int i=0;i<matrix[number-1].size();i++){
                matrix[number][i]=0;
            }
        }
        for (const int &number : columns){
            for(int i=0;i<height;i++){
                cout<<number<<endl;
                matrix[i][number]=0;
            }
        }            
            
    }
};

int main(){

}