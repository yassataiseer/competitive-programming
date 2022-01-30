///link: https://dmoj.ca/problem/acc1p2
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

struct Graph{
    int connected;
    bool discovered;
};

void traverse(int current,int destination, vector<vector<Graph> >Grid){ 
    queue<int> CurrentQueue;  

    CurrentQueue.push(current);  
    int path = 1;
    while(!CurrentQueue.empty()){
        int val = CurrentQueue.front();
        CurrentQueue.pop();
        for(Graph CurrentRow:Grid[val]){
            
            if(CurrentRow.connected==destination){
                cout<<path<<endl;
                return;
            }else if(!CurrentRow.discovered){
                CurrentQueue.push(CurrentRow.connected);
                CurrentRow.discovered = true; 
            }

        }
        path++;
    }
    cout<<"-1"<<endl;
    return;
}
int main(){
    int N,M,Q;
    cin>>N>>M>>Q;
    vector<vector<Graph> >Grid(pow(10,5));
    
    for(int i=0;i<M;i++){
        int x,y;
        cin>>x>>y;
        Graph CurrentGraph;
        CurrentGraph.connected = x;
        CurrentGraph.discovered = false;
        Grid[y].push_back(CurrentGraph);

        Graph CurrentGraph2;
        CurrentGraph2.connected = y;
        CurrentGraph2.discovered = false;
        Grid[x].push_back(CurrentGraph2);        
    }

    vector<int> Answers;
    vector<vector<int> > Connections;
    for(int r=0;r<Q;r++){
        int x,y;
        cin>>x>>y;
        vector<int> Current;
        Current.push_back(x);
        Current.push_back(y);
        Connections.push_back(Current);
    }
    for(vector<int>CurrentNode:Connections){
        traverse(CurrentNode[0],CurrentNode[1],Grid);

    }

    return 0;
}

