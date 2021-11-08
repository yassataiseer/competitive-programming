//I was being retarded and decided to convert to a string leading too a lot of errors
// SOmeone plz fix it
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
#include <sstream>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string val1="";
        ListNode* prev_Node = NULL;
        ListNode* current_Node = l1;
        ListNode* next_Node;
        val1+=to_string(current_Node->val);
        while(current_Node->next!=NULL){
            next_Node = current_Node->next;
            current_Node->next = prev_Node;
            prev_Node = current_Node;
            current_Node = next_Node;
            val1+=to_string(current_Node->val);
        }
        current_Node = l2;
        prev_Node = NULL;
        next_Node = NULL;
        string val2 = "";
        val2+=to_string(current_Node->val);
        while(current_Node->next!=NULL){
            next_Node = current_Node->next;
            current_Node->next = prev_Node;
            prev_Node = current_Node;
            current_Node = next_Node;
            val2+=to_string(current_Node->val);
        }
        reverse(val1.begin(),val1.end());
        reverse(val2.begin(),val2.end());
        long long int var1;
        long long int var2;


        int num; // a variable of int data type
        
        stringstream ss; 
        stringstream ww;
        ss << val1;  
        ss >> var1; 
        ww << val2;
        ww >> var2;
        cout<<var1<<"  "<<var2<<endl;
        string new_val = to_string(var1+var2);
        
        
        ListNode* finalNode = new ListNode();
        finalNode =  NULL;
        for(int i=0;i<new_val.size();i++){
            
            char current_char = new_val[i];
            int current_val = (int)current_char-48;
            
            ListNode* New_Node = new ListNode();
            New_Node->val = current_val;
            New_Node->next = finalNode;
            finalNode = New_Node;

        }
        return finalNode;
    }
};

int main(){
    return 0;
}