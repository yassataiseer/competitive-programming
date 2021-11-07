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
#include <queue>
using namespace std;
//We are going to do a breadth first search
class graph{
    public:
        vector<vector<int> >adjlist;//where data is stored
        int size;//size of current adjlist

    graph(int length){//given by a the user
        adjlist.resize(length);
        //resize the vector to specified length
        size = length;
        //set the size to length of graph to get length at O(1) space
    }
    void AddEdge(int vertex, int vertex2, bool weighted){

        //weighted booleans lets us now if the graph is one way or 2 way
        adjlist[vertex].push_back(vertex2);//by default vertex1 connects to vertex2
        if(weighted){
            adjlist[vertex2].push_back(vertex);
        }
    }
    void view(){//view current graph
        for(int i=0;i<size;i++){
            cout<<i<<"-->";
            for(int j=0;j<adjlist[i].size();j++){
                cout<<adjlist[i][j];
                cout<<"->";
            }

            cout<<endl;
        }
    }
    void BFS(int reference){
        //the acc BFS CODE
        //Reference is the starting point of the graph
        queue<int> mydeck;//Queue will act as a point for where to search next in the graph
        bool visited[size];//checks if current value has been discovered or not
        for(int i=0;i<size;i++){
            visited[i]=false; 
        }

        mydeck.push(reference);

        visited[reference] = true;

        vector<int>::iterator i;

        while(!mydeck.empty()){
            int current_val = mydeck.front();
            cout << current_val << " ";
            mydeck.pop();

           for(i = adjlist[current_val].begin();i!=adjlist[current_val].end();i++){
               if(!visited[*i]){
                    visited[*i] = true;
                    mydeck.push(*i);
                  
                }
           } 

        }     
    }
};


int main(){
    //Init
    graph g(4);
    g.AddEdge(0, 1,true);
    g.AddEdge(0, 2,true);
    g.AddEdge(1, 2,true);
    g.AddEdge(2, 0,true);
    g.AddEdge(2, 3,true);
    g.AddEdge(3, 3,true);

    g.view();
    //Algorithm:
    g.BFS(2);
        
    
    return 0;
}