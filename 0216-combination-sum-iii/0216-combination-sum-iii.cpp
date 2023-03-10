class Solution {
public:
    void solve(vector<vector<int>>&res,vector<int>temp,int k,int n,int i,vector<int>arr,int sum,int cnt)
    {
        if(cnt==k)
        {
            if(sum==n)
                res.push_back(temp);
            return;
        }
        for(int j=i;j<arr.size();j++)
        {
            temp.push_back(arr[j]);
            sum+=arr[j];
            solve(res,temp,k,n,j+1,arr,sum,cnt+1);
            temp.pop_back();
            sum-=arr[j];
            // cnt-=1;
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>res;
        vector<int>temp,arr{1,2,3,4,5,6,7,8,9};
        solve(res,temp,k,n,0,arr,0,0);
        return res;
    }
};