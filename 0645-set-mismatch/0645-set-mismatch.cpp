class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int>s;
        int n=nums.size();
        int sum=n*(n+1)/2;
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(s.find(nums[i-1])==s.end()){
                sum-=nums[i-1];
                s.insert(nums[i-1]);
                }
            else
            {
               ans.push_back(nums[i-1]); 
            }
        }
        ans.push_back(sum);
        return ans;
    }
};