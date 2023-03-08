class Solution {
public:
    void solve(int i,vector<int>ds,vector<vector<int>>&res,int target,vector<int>can)
    {
        if(target==0)
        {
            res.push_back(ds);
        }
        for(int j=i;j<can.size();j++)
        {
            if(can[j]>target)
                break;
            if(j && can[j]==can[j-1] && j>i)
                continue;
            ds.push_back(can[j]);
            solve(j+1,ds,res,target-can[j],can);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>res;
        solve(0,ds,res,target,candidates);
        return res;
    }
};