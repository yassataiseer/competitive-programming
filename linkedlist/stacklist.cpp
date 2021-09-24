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
    int top;
    /*
    over here is the add implementation
    takes an integer values and maps it too current
    linked list 
    */
    void add(int value){
        if(size==0){
            stack->data = value;
            stack->next = NULL; 
            size++;   
        }else{
            Node* current_val = new Node();
            current_val->data = value;
            current_val->next = stack;
            
            stack = current_val;

            size++;
            //New_node->next = stack->next;
        }
        top = stack->data;
    }
    /*
    delete top value and return number returned
    will return -1 if tail node
    */
    int pop(){
        if(stack->next==NULL){
            top = -1;
            return -1;
        }
        else{
            int value = stack->data;
            size--;
            stack = stack->next;
            top = stack->data;
            //cout<< stack->data <<endl;
            return value;
        }
        
    }
    /* returns size of stack*/
    int length(){
        if(size==NULL){
            return 0;
        }
        return size;
    }
    int front(){
        return top;
    }
    
};

int main(){
    Stack myStack;
    myStack.add(5);
    myStack.add(4);
    myStack.add(2);
    myStack.add(1);
    cout<<"top: "<<myStack.front()<<endl;
    cout<<"size: "<<myStack.length()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<"top: "<<myStack.front()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<"size: "<<myStack.length()<<endl;

    return 0;
}
