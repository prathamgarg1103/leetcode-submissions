// Last updated: 6/5/2026, 12:17:20 PM
class Solution {
public:
    int maxSum = INT_MIN;
    int solve(TreeNode* root) {
        if (!root) return 0;
        int left = max(0, solve(root->left));
        int right = max(0, solve(root->right));
        maxSum = max(maxSum, root->val + left + right);
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxSum;
    }
};