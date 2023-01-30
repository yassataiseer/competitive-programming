#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>	
#include<queue>
using namespace std;

struct Pair{
    int x;
    int y;
};
vector<vector<bool> > grid( 8 , vector<bool> (8));


bool IsValid(int x,int y){
    if(x<0||y<0||x>=8||y>=8){
        return false;
    }
    if(grid[x][y]){
        return false;
    }

    return  true;
}
int dRow[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dCol[8] = {1, 2, 2, 1, -1, -2, -2, -1};

void Traverse(Pair CurrentPair,Pair FinalPair){
    queue<Pair> initPair;
    initPair.push(CurrentPair);
    int counter = 0;
    while(!initPair.empty()){

        Pair CurrentCell = initPair.front();
        initPair.pop();

        int x = CurrentCell.x;
        int y = CurrentCell.y;
        if(x==FinalPair.x&&y==FinalPair.y){
            cout<<counter<<endl;
            return;
        }    
        
        counter++;
        bool count = true;
        for(int i = 0; i < 8; i++) {

            int adjx = x + dRow[i];
            int adjy = y + dCol[i];
            Pair NewPair;
            NewPair.x = adjx;
            NewPair.y = adjy;
            if(IsValid(adjx,adjy)){
                count = false;
                initPair.push(NewPair); 
                grid[adjx][adjy] = true;
            }
        }    
        if(count){
            counter--;
        }        
    }
}
int main(){
    
    Pair Init;
    cin>>Init.x;
    cin>>Init.y;
    Pair Final;
    cin>>Final.x;
    cin>>Final.y;
    Traverse(Init,Final);

    return 0;
}


