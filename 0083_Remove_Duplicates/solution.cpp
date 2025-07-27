#include <iostream>
using namespace std;
class Solution {
    public:
        ListNode* removeDuplicates(ListNode* head){
             ListNode* temp=head;
             while(temp!=nullptr && temp->next!=nullptr){
                if(temp->val==temp->next->val){
                    temp->next=temp->next->next;
                } else {
                    temp=temp->next;
                }
             }
             return head;
        }
};
return 0;