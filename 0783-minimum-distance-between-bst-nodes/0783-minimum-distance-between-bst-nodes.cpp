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
    void find(TreeNode *root,vector<int>&res)
    {
         if(root==NULL)
            return;
        find(root->left,res);
        res.push_back(root->val);
        find(root->right,res);
    }
     int res=INT_MAX,pre=-1;
    int minDiffInBST(TreeNode* root) {
        
        // queue<TreeNode*>q;
        // q.push(root);
        // while(!q.empty())
        // {
        //     TreeNode *t=q.front();
        //     q.pop();
        //     res.push_back(t->val);
        //     if(t->left)
        //         q.push(t->left);
        //     if(t->right)
        //         q.push(t->right);
        // }
        // sort(res.begin(),res.end());
        // int r=INT_MAX;
        // for(int i=0;i<res.size()-1;i++)
        //     if(res[i+1]-res[i]<r)
        //         r=res[i+1]-res[i];
        // return r;
        
        
        //   vector<int>res;
        // find(root,res);
        // int r=INT_MAX;
        // for(int i=0;i<res.size()-1;i++)
        //     if(res[i+1]-res[i]<r)
        //         r=res[i+1]-res[i];
        // return r;
        
        if(root->left!=NULL)
            minDiffInBST(root->left);
        if(pre>=0)
            res=min(res,root->val-pre);
        pre=root->val;
        if(root->right!=NULL)
            minDiffInBST(root->right);
        
        return res;
    }
    
    
};