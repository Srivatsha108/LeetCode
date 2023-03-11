class Solution {
public:
    void solve(vector<int>nums,vector<int>&temp,vector<vector<int>>&res,int i)
    {
        if(i==nums.size())
        {
            if(find(res.begin(),res.end(),temp)==res.end())
                res.push_back(temp);
            return;
        }
        // for(int j=i;j<nums.size();j++){
        temp.push_back(nums[i]);
        solve(nums,temp,res,i+1);
        temp.pop_back();
        solve(nums,temp,res,i+1);
        // }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>res;
        solve(nums,temp,res,0);
        return res;
    }
};