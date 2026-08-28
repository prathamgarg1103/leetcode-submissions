// Last updated: 8/28/2026, 6:11:08 PM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool hasPathSum(TreeNode* root, int targetSum) {
15        if(root == NULL)return false;
16        targetSum -= root->val;
17        if(root->left == NULL && root->right == NULL)return targetSum == 0;
18        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
19    }
20};