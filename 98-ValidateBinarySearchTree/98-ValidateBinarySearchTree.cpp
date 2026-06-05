// Last updated: 6/5/2026, 12:17:31 PM
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
    bool isValidBST(TreeNode* root) {
        //preorder
        vector<int>ans;
        in(root,ans);
         for (int i = 1; i < ans.size(); i++) {
            if (ans[i] <= ans[i - 1]) {
                return false;
            }
        }
        return true;
    }
    
    void in(TreeNode* root,vector<int>&ans){
        if(root==NULL)return ;
        in(root->left,ans);
        ans.push_back(root->val);
        in(root->right,ans);
    }
};