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
    void BFS(TreeNode* a,vector<int>&v)
    {
        if(!a)return;
        queue<TreeNode*>q;
        q.push(a);

        while(!q.empty())
        {
            int size =q.size();

                int rightmost ;
            // Traversing Level !!
            for(int i=0;i<size;i++)
            {
                 a=q.front();q.pop();

                rightmost=a->val;
                if(a->left)q.push(a->left);
                if(a->right)q.push(a->right);
            }
            // After Travesing Lvl, Push it's Righmost !!
            v.push_back(rightmost);
        }

    }
    vector<int>ans;
    void right(TreeNode* root,int level){
        if(root==NULL) return;
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        right(root->right,level+1);
        right(root->left,level+1);

    }
    vector<int> rightSideView(TreeNode* root) {
        // right(root,0);
        // return ans;
         vector<int> v;
        // DFS(a,0,v);
        BFS(root,v);
        return v;
    }
};