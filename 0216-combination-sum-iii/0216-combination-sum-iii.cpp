class Solution {
public:
    void solve(int k,int n,int i,vector<vector<int>>&v,vector<int>&temp,vector<int>nums,int sum)
    {
        // v.push_back(temp);
        if(temp.size()==k)
        {
            if(sum==n)
            {
                v.push_back(temp);
                return;
            }
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            temp.push_back(nums[j]);
            solve(k,n,j+1,v,temp,nums,sum+nums[j]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
    
        vector<int>temp;
        vector<vector<int>>v;
        vector<int>nums{1,2,3,4,5,6,7,8,9};
        solve(k,n,0,v,temp,nums,0);
        return v;
    }
};