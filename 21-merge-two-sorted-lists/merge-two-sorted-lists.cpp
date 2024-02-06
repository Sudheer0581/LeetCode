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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * x = new ListNode(0);
        ListNode * temp =x;
        ListNode *t1 = list1;
        ListNode *t2 = list2;
        if(list1==NULL and list2==NULL){
            return NULL;
        }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        while(t1 and t2){
            if(t1->val<=t2->val){
                ListNode * z =new ListNode(t1->val);
                x->next=z;
                x=x->next;
                t1=t1->next;
            }
            else{
                ListNode * z =new ListNode(t2->val);
                x->next=z;
                x=x->next;
                t2=t2->next;
            }  
        }
        while(t1){
            ListNode * z =new ListNode(t1->val);
            x->next=z;
            x=x->next;
            t1=t1->next;
        }
        while(t2){
            ListNode * z =new ListNode(t2->val);
            x->next=z;
            x=x->next;
            t2=t2->next;
        }
        return temp->next;
    }
};