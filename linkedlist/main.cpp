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
};
int main(){
    Node* first_node = new Node();
    first_node->data = 1;
    Node* second_node = new Node();
    second_node->data = 2;
    first_node->next = second_node;
    cout << first_node->data<<endl;
    cout << first_node->next<<endl;
    cout <<second_node <<endl;
    cout <<second_node->next <<endl;

    return 0;
}


