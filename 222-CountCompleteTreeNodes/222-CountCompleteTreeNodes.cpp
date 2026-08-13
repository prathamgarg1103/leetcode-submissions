// Last updated: 8/13/2026, 11:16:50 AM
class Solution {
public:
    int countNodes(TreeNode* root) {

        if(root == NULL)
            return 0;

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};