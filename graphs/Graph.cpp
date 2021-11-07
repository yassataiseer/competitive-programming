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
///THIS IS AN ADJACENCY GRAPH
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
};


int main(){
    graph g(5);
    g.AddEdge(1,2,true);
    g.AddEdge(4,2,true);
    g.AddEdge(1,3,true);
    g.AddEdge(4,3,true);
    g.AddEdge(1,4,true);

    g.view();
    return 0;
}