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
int main(){
    Node* first_node = new Node();
    first_node->data = 1;
    Node* second_node = new Node();
    second_node->data = 2;
    Node* third_node = new Node();
    third_node->data = 3;
    first_node->next = second_node;
    second_node->next = third_node;
    cout << first_node->data<<endl;
    cout << first_node->next<<endl;
    cout <<second_node <<endl;
    cout <<second_node->next <<endl;
    /* search linked list below:
    Node* current_node = first_node;
    while(current_node->next!=NULL){
        if(current_node->data==2){
            cout<<"its here"<<endl;
            break;   
        }
        current_node = current_node->next;
    }*/

    /*removing value "2" from list
    
    Node* prev_node = first_node;
    current_node = first_node;
    while(current_node->next!=NULL){
        if(current_node->data==2){
            break;
        }
        prev_node = current_node;
        current_node = current_node->next;
    }
    prev_node->next = current_node->next;
    cout<<"removed value"<<endl;
    delete current_node;
    cout << first_node->data<<endl;
    cout << first_node->next->data <<endl;
    will return 1->3->Null
    */
    Node* prev_node = NULL;
    Node* current_node = first_node;
    Node* next_node;
    while(current_node->next!=NULL){
        next_node = current_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }
    cout << first_node->data<<endl;
    cout << first_node->next <<endl;
    cout << second_node->data <<endl;

    return 0;
}


