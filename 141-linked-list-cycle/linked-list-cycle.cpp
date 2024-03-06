/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp=head;
        map<ListNode*,int>mp;
        if(temp==NULL){
            return false;
        }
        while(temp->next){
            ListNode* t=temp->next;
            mp[t]++;
            if(mp[t]>1){
                return true;
            }
            temp=temp->next;
        }
        return false;
    }
};