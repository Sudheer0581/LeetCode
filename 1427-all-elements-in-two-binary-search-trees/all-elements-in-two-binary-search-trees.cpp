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

    void dfs(TreeNode* root,vector<int>& v1){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                v1.push_back(q.front()->val);
                TreeNode* fr=q.front();
                q.pop();
                if(fr->left){
                    q.push(fr->left);
                }
                if(fr->right){
                    q.push(fr->right);
                }
            }
        }

    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        if(root1!=NULL){
            dfs(root1,v1);
        }
        if(root2!=NULL){
            dfs(root2,v1);
        }
        
        sort(v1.begin(),v1.end());
        return v1;
    }
};