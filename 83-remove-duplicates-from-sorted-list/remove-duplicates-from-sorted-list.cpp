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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode* temp = head;
     if(head==NULL){
         return 0;
     }
     while(temp->next!=NULL){
         ListNode* x = temp->next;
         if(temp->val==x->val){
             temp->next=temp->next->next;
             x->next=NULL;
         }
         else{
             temp=temp->next;
         }
     }
     return head;
    }
};