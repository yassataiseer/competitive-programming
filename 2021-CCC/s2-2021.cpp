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

int solve(string grid[],string direction[],int number[],int instructions,int length,int width){
    int G_count = 0;
    for(int i=0;i<instructions;i++){
        if(direction[i]=="R"){
            for(int x=0;x<width;x++){
                if (grid[number[i]-1][x]=='B'){
                    grid[number[i]-1][x] = 'G';
                    //G_count++;
                }
                else{
                    grid[number[i]-1][x] = 'B';
                    //G_count--;
                }
            }
        }
        else{
            for(int x=0;x<length;x++){
                if (grid[x][number[i]-1]=='B'){
                    grid[x][number[i]-1] = 'G';
                    //G_count++;

                }
                else{
                    grid[x][number[i]-1] = 'B';
                    //G_count--;
                }
            }
        }
    }
     for(int i=0;i<length;i++){
         size_t n= count(grid[i].begin(), grid[i].end(), 'G');
         G_count+=n;
     }
    return G_count;

}


int main(){
    int length;
    cin >> length;
    int width;
    cin >> width;
    string grid[width];
    string row="";
    for(int i=0;i<length;i++){
        row +="B";
    }  
    
    int actions;
    cin >> actions;
    string direction[actions];
    int number[actions];
    for(int x=0;x<actions;x++){
        cin >> direction[x] >>number[x];
    }


    for(int i=0;i<width;i++){
        grid[i] = row;
    }
    cout << solve(grid,direction,number,actions,length,width)<<endl;
    return 0;
}