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

bool check_prime(int number){
    for (int i=2;i<number/2;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}
int * factor(int num,int m,int n){
    for(int i = 1; i <= num; ++i) {
        if(num % i == 0)
            int number1 = i;
            int number2= num/i;
            if(i<m&&number2<n){
                int factors[] = {i,number2};
                return factors;
            }
    }
    int factors[] = {num,0};
    return factors;
    
}
void solve(int m,int n,vector<vector<int> > grid, int x,int y){
    if(x>m||x>n||y>m||y>n){
        cout <<"no"<<endl;

        //return false;
    }
    if(x*y==grid[m][n]){
        cout <<"yes"<<endl;
        //return true;
    }
    if(check_prime(grid[x][y])){
        x = grid[x][y]-1;
        y = 0;
    }
    else{
        int *factors;
        factors = factor(grid[x][y],m,n);
        solve(m,n,grid,factors[0],factors[1]);
    }

}

int main(){
    int m,n;
    cin >> m;
    cin >> n;
    vector<vector<int> > grid;
    for(int i=0;i<m;i++){
        vector<int> row;
        for(int x=0;x<n;x++){
            int number;
            cin >> number;
            row.push_back(number);

        }
        grid.push_back(row);

    }
    solve( m, n, grid, 0,0);
    return 0;
}