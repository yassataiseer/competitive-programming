// link: https://leetcode.com/problems/merge-in-between-linked-lists/submissions/

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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(list1==NULL||list2==NULL){
            return list1;
        }
        ListNode* LastNode2 = list2;
        while(LastNode2->next!=NULL){
            LastNode2 = LastNode2->next;
        }
        ListNode* StartNode=NULL;
        ListNode* CurrentNode=list1;
        ListNode* EndNode=NULL;
        int counter =0;
        while(EndNode==NULL){
            if(counter+1==a){
                StartNode = CurrentNode;
            }
            if(counter==b){
                EndNode = CurrentNode->next;
            }
            CurrentNode = CurrentNode->next; 
            counter++;
        }
        StartNode->next = list2;
        LastNode2->next = EndNode;
        return list1;
    }
};
int main(){
    return 0;
}