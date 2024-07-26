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
    ListNode* deleteMiddle(ListNode* head) {
        int c=0;
        ListNode* temp=head;
        while(temp!=NULL){
            c+=1;
            temp=temp->next;
        }
        if(c==1) return NULL;
        int x=c/2;
        temp=head;
        while(temp!=NULL){
            x-=1;
            if(x==0){
                temp->next=temp->next->next;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};