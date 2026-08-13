// Last updated: 8/13/2026, 11:17:14 AM
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {

        map<int,int> mp;
        queue<pair<TreeNode*,int>> q;
        vector<int> ans;

        if(root == NULL)
            return ans;

        q.push({root,0});

        while(!q.empty()){

            auto it = q.front();
            q.pop();

            TreeNode* node = it.first;
            int level = it.second;

            if(mp.find(level) == mp.end())
                mp[level] = node->val;

            if(node->right)
                q.push({node->right, level + 1});

            if(node->left)
                q.push({node->left, level + 1});
        }

        for(auto it : mp)
            ans.push_back(it.second);

        return ans;
    }
};