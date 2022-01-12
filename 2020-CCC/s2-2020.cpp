#include <iostream>
#include <map>
#include <string>

#include<vector>
#include<math.h>
#include<numeric>
#include<algorithm>
#include<iterator> 
#include<iomanip>
#include<queue>	
using namespace std;


class Cells{
    public:
        int x;
        int y;
        bool discovered;
};
vector<vector<Cells> > grid(1000010);

void Traverse(Cells LastCell){
    queue<Cells> CurrentQueue;
    CurrentQueue.push(LastCell);
    while(!CurrentQueue.empty()){
        Cells CurrentCell = CurrentQueue.front();
        CurrentQueue.pop();
        vector<Cells> PossibleNeighbors = grid[CurrentCell.x*CurrentCell.y];
        for(int i=0;i<PossibleNeighbors.size();i++){
            if(PossibleNeighbors[i].x==1&&PossibleNeighbors[i].y==1){
                cout<<"yes"<<endl;
                return;
            }else if(!PossibleNeighbors[i].discovered){
                PossibleNeighbors[i].discovered=true;
                CurrentQueue.push(PossibleNeighbors[i]);
            }
        }

    }
    cout<<"no"<<endl;
    return;
}

int main(){
    int m,n;
    cin >> m;
    cin >> n;
    
    Cells LastCell;
    for(int i=0;i<m;i++){
        for(int x=0;x<n;x++){
            int number;
            cin >> number;
            Cells CurrentCell;
            CurrentCell.x = i+1;
            CurrentCell.y=x+1;
            CurrentCell.discovered = false;
            if(i+1==m&&x+1==n){
                LastCell.x = i+1;
                LastCell.y = x+1;
                LastCell.discovered = false;
            }
            grid[number].push_back(CurrentCell);
        }
       // grid.push_back(row);
    }
    Traverse(LastCell);

    return 0;
}