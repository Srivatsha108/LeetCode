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
    void find(vector<string>&res,TreeNode *root,string s)
    {
        if(!root->left && !root->right)
        {
            s+=to_string(root->val);
            res.push_back(s);
            return;
        }
        if(root->left)
            find(res,root->left,s+to_string(root->val)+"->");
        if(root->right)
            find(res,root->right,s+to_string(root->val)+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        string s;
        find(res,root,s);
        return res;
    }
};