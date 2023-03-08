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
    void solve(TreeNode *root,vector<string>&res,string ans)
    {
        if(!root->left && !root->right)
        {
            ans+=to_string(root->val);
            res.push_back(ans);
            return;
        }
        if(root->left)
        {
            solve(root->left,res,ans+to_string(root->val)+"->");
        }
        if(root->right)
        {
            solve(root->right,res,ans+to_string(root->val)+"->");
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        solve(root,res,"");
        return res;
    }
};