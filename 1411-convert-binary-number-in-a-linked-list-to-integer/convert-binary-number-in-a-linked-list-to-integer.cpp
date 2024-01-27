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
    int getDecimalValue(ListNode* head) {
        vector<int>v;
        ListNode* temp = head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }
        int j=0,s=0;
        for(int i=v.size()-1;i>=0;i--){
            if(v[i]==1){
                s+=(1<<j);
            }
            j+=1;
        }
        return s;
        
    }
};
