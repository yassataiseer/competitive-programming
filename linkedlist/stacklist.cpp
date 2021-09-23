/*
using linked lists to create stacks

*/

#include <iostream>
#include <string>
#include <vector>
#include<math.h>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <map>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};//linked list class

class Stack{
    public:
    Node* stack = new Node();
    int size = 0;
    /*
    over here is the add implementation
    takes an integer values and maps it too current
    linked list 
    */
    void add(int value){
        Node* New_node = new Node();
        New_node->data = value;
        if(size==0){
            stack->data = value;
            stack->next = NULL; 
            size++;   
        }else{
            Node* current_val = stack;
            stack->data = value;
            stack->next = current_val;
            size++;
            //New_node->next = stack->next;
        }
        cout<< stack->data<<endl;
    }

    int pop(){
        if(stack->next==NULL){
            return -1;
        }
        else{
            int value = stack->data;
            
            size--;
            return value;
        }
    }
};

int main(){
    Stack newStack;
    Stack myStack;
    myStack.add(5);
    myStack.add(4);
    myStack.add(2);
    myStack.add(1);
    return 0;
}
