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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // vector<int>r;
        // queue<TreeNode*>q;
        // q.push(root);
        // while(!q.empty())
        // {
        //     TreeNode *temp=q.front();
        //     q.pop();
        //     if(temp->left)
        //         r.push_back(temp->left);
        //     if(temp->right)
        //         r.push_back(temp->right);
        // }
        // vector<vector<int>>res;
        // int c=0;
        // for(int i=0;i<r.size()/2;i++)
        // {
        //     vector<int>r;
        //     if(c%2==0){
        //     r.push_back(r[2*i+2]);
        //     r.push_back(r[2*i+1]);
        //     }
        //     else
        //     {
        //     r.push_back(r[2*i+1]);
        //     r.push_back(r[2*i+2]);
        //     }
        //     res.push_back(r);
        //     c++;
        // }
        // return res;
        
        vector<vector<int>>res;
        if(root==NULL)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            vector<int>r;
            int s=q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode *t=q.front();
                q.pop();
                if(t->left){
                q.push(t->left);
                }
                if(t->right)
                q.push(t->right);
                
                
                r.push_back(t->val);
                
            
            }
            if(c%2==0)
                res.push_back(r);
            else{
                reverse(r.begin(),r.end());
                 res.push_back(r);
            }  
            c++;
                
        }
        return res;
    }
};