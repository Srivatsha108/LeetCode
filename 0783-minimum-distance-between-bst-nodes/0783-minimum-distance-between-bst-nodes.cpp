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
    vector<int>res;
    int minDiffInBST(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode *t=q.front();
            q.pop();
            res.push_back(t->val);
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
        }
        sort(res.begin(),res.end());
        int r=INT_MAX;
        for(int i=0;i<res.size()-1;i++)
            if(res[i+1]-res[i]<r)
                r=res[i+1]-res[i];
        return r;
    }
};