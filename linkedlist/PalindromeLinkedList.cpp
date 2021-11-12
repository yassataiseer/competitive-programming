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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* OldNode = head;
        
        ListNode* Current_Node = head;
        ListNode* Prev_Node = NULL;
        ListNode* Next_Node;
        while(Current_Node->next!=NULL){
            Next_Node = Current_Node->next;
            Current_Node->next = Prev_Node;
            Prev_Node = Current_Node;
            Current_Node = Next_Node;
        }
        if(Prev_Node==OldNode){
            return true;
        }
        return false;
    }
};

int main(){
    return 0;
}