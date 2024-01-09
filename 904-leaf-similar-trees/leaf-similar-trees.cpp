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
    void dfs(TreeNode* root,vector<int>&v){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL){
            v.push_back(root->val);
        }
        dfs(root->left,v);
        dfs(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v;
        dfs(root1,v);
        vector<int>v1(v);
        v.clear();
        dfs(root2,v);
        vector<int>v2(v);
        if(v1==v2)return 1;
        return 0;
    }
};