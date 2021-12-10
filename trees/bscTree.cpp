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

struct Node{
    int value;
    Node* Left;
    Node* Right;
};
struct BST{
    Node* RootNode;
};
BST* NewBST(){//make BST 
    BST* NewBST = new BST();
    NewBST->RootNode = NULL;
    return NewBST;
}
Node* InsertNode(int val, Node* CurrentNode){
    Node* NewNode;
    if(CurrentNode==NULL){
        NewNode->value = val;
        CurrentNode = NewNode;   
    }
    else if (val < CurrentNode->value){
        CurrentNode->Left=InsertNode(val,CurrentNode->Left);
    }else if(val>CurrentNode->value){
        CurrentNode->Right = InsertNode(val,CurrentNode->Right);
    }
    
    return CurrentNode;
}
void BST_insert(int val, BST* Tree){
    Tree->RootNode = InsertNode(val,Tree->RootNode);
    cout<<Tree->RootNode->value<<endl;
    cout<<"Success"<<endl;
}

int main(){
    BST* NewTree = NewBST();
    BST_insert(5,NewTree);


    return 0;
}