class Solution {
public:
    void find(int i,vector<int>nums,vector<vector<int>>&res,vector<int>temp)
    {
        if(i==nums.size())
        {
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        find(i+1,nums,res,temp);
        temp.erase(temp.end()-1);
        find(i+1,nums,res,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>temp;
        find(0,nums,res,temp);
        return res;
    }
};