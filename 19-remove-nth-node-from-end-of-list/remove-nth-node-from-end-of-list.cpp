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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        while(temp){
            c+=1;
            temp=temp->next;
        }
        int x=c-n+1;
        if(head==NULL) return NULL;
        if(x==1){
            // ListNode*temp=head;
            head= head->next;
            // delete temp;
            return head;
        }
        ListNode* temp1=head;
        // cout<<x<<endl;
        for(int i=0;i<x-2;i++){
            temp1=temp1->next;
        }
        // cout<<temp1->val<<endl;
        temp1->next=temp1->next->next;
        return head;

    }
};