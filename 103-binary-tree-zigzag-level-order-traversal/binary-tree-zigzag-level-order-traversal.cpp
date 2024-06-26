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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*>q;
        q.push(root);

        bool left=true;
        while(!q.empty()){
            int s = q.size();
            vector<int>v(s);
            for(int i=0;i<s;i++){
                TreeNode* node = q.front();
                q.pop();
                int ind=0;
                if(left){
                    ind=i;
                }
                else{
                    ind=(s-1-i);
                }
                v[ind]=node->val;

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            left=!left;
            result.push_back(v);
        }
        return result;
    }
};