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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddList = new ListNode(-1);
        ListNode* evenList=new ListNode(-1);
        ListNode* oddTail=oddList;
        ListNode* evenTail=evenList;
        ListNode* curr=head,*temp;
        int x=1;
        while(curr){
            temp=curr;
            curr=curr->next;
            temp->next=NULL;
            if(x%2!=0){
                oddTail->next=temp;
                oddTail=temp;
            }
            else{
                evenTail->next=temp;
                evenTail=temp;
            }
            x+=1;
            cout<<x;
        }
        oddTail->next=evenList->next;
        return oddList->next;
    }
};