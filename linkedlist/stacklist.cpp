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
    }
    /*
    delete top value and return number returned
    will return -1 if tail node
    */
    int pop(){
        if(stack->data==NULL){
            return -1;
        }
        else{
            int value = stack->data;
            size--;
            stack = stack->next;
            //cout<< stack->data <<endl;
            return value;
        }
    }
    /* returns size of stack*/
    int length(){
        return size;
    }
};

int main(){
    Stack newStack;
    Stack myStack;
    myStack.add(5);
    myStack.add(4);
    myStack.add(2);
    myStack.add(1);
    cout<<myStack.length()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<myStack.pop()<<endl;
    cout<<myStack.length()<<endl;

    return 0;
}
