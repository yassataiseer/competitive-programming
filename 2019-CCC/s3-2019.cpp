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

void solve(vector<vector<string> > matrix, int X_count){

    for(int i=0;i<3;i++){
        bool X_occur = false;
        for(int x=0;x<3;x++){
            if (matrix[i][x]=="X"){
                if(!X_occur&&matrix[i][x]=="X"){

                    X_occur = true;
                    if(x==1){
                        int common_diff = abs(stoi(matrix[i][x-1]) - stoi(matrix[i][x+1]))/2;
                        matrix[i][x] = to_string(stoi(matrix[i][x-1])+common_diff);
                    }
                    else if(x==2){
                        int common_diff = abs(stoi(matrix[i][x-2]) - stoi(matrix[i][x-1]))/2;
                        matrix[i][x] = to_string(stoi(matrix[i][x-1])+common_diff);
                    }
                    X_count--;
                }else{
                    
                }
                
            }
        }
    }


    if(X_count==0){
        for(int i=0;i<3;i++){
            for(int x=0;x<3;x++){
                cout<<matrix[i][x]<<" ";
            }
            cout<<endl;
        }
    }else{
        solve(matrix,X_count);
    }

}

int main(){
    vector<vector<string> > matrix;
    int X_count = 0;
    for(int i=0;i<3;i++){
        vector<string> row;
        for(int x=0;x<3;x++){
            string value;
            cin >> value;
            if(value=="X"){
                X_count++;
            }
            row.push_back(value);

        }
        matrix.push_back(row);
    }
    solve(matrix,X_count);
    return 0;
}