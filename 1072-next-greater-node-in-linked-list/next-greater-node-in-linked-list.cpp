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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int>st;
        vector<int>t;
        ListNode* temp=head;
        while(temp!=NULL){
            t.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v(t.size(),0);
        for(int i=t.size()-1;i>=0;i--){
            while(!st.empty() and st.top()<=t[i]){
                st.pop();
            }
            if(!st.empty()){
                v[i]=st.top();
            }
            st.push(t[i]);
        }
        return v;

    }
};