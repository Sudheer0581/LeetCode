/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root) return {};
        vector<double>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            double s=0;
            for(int i=0;i<n;i++){
                TreeNode* front = q.front();
                q.pop();
                s+=front->val;
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            v.push_back(s/n);
        }
        return v;
    }   

};