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
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode* SlowNode = head;
        ListNode* FastNode = head->next;
        while(SlowNode!=FastNode){  
            if(FastNode->next==NULL||FastNode==NULL){
                return false;
            }
            SlowNode = SlowNode->next;
            FastNode = FastNode->next->next;
        }
        return true;

    }
};

int main(){

    return 0;
}