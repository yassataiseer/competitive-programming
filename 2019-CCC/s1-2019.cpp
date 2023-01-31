//uses cpp11
#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
using namespace std;






int main(){

    vector< vector<int> > Grid={{1,2},{3,4}};
    string instructions;
    cin>>instructions;

    for(char letter : instructions){
        if(letter=='H'){
            vector<int> Temporary;
            Temporary = Grid[1];
            Grid[1] = Grid[0];
            Grid[0] = Temporary;
        }else{
            int temporary = Grid[0][1];
            Grid[0][1] = Grid[0][0];
            Grid[0][0] = temporary;
            temporary = Grid[1][1];
            Grid[1][1] = Grid[1][0];
            Grid[1][0] = temporary;
        }
    }
    cout<<Grid[0][0]<<" "<<Grid[0][1]<<endl;
    cout<<Grid[1][0]<<" "<<Grid[1][1]<<endl;

    return 0;
}