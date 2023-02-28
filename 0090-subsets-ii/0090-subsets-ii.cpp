class Solution {
public:
    void solve(vector<vector<int>>&res,vector<int>&temp,int i,vector<int>nums){
        // if(i==nums.size())
        // {
        //     if(find(res.begin(),res.end(),temp)==res.end())
        //         res.push_back(temp);
        //     return;
        // }
        // temp.push_back(nums[i]);
        // solve(res,temp,i+1,nums);
        // temp.pop_back();
        // solve(res,temp,i+1,nums);
        res.push_back(temp);
        for(int ind=i;ind<nums.size();ind++)
        {
            if(i!=ind && nums[ind]==nums[ind-1])continue;
            temp.push_back(nums[ind]);
            solve(res,temp,ind+1,nums);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       vector<vector<int>>res;
        vector<int>temp;
        solve(res,temp,0,nums);
        return res;
    }
};