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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int s=0;
        unordered_map<int,ListNode*>mp;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        mp[0]=dummy;
        while(head){
            s+=head->val;
            if(mp.find(s)!=mp.end()){
                ListNode* start = mp[s];
                ListNode* temp=start;
                int ps=s;
                while(temp!=head){
                    temp=temp->next;
                    ps+=temp->val;
                    if(temp!=head)
                    {
                        mp.erase(ps);
                    }
                }
                start->next=head->next;
            }
            else{
                mp[s]=head;
            }
            head=head->next;
        }
        return dummy->next;
        
    }
};