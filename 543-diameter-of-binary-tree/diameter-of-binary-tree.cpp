class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        calculateDiameter(root, diameter);
        return diameter;
    }


    int calculateDiameter(TreeNode* root, int& diameter) {
        if (!root) {
            return 0;
        }

        int leftHeight = calculateDiameter(root->left, diameter);
        int rightHeight = calculateDiameter(root->right, diameter);

        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }
};
    