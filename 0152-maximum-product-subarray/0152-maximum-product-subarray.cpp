class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int l=nums[0],r=nums[0],prod=1,x=0;
        for(int i=0;i<nums.size();i++)
        {
            prod*=nums[i];
            if(nums[i]==0)
            {
                x=1;
                prod=1;
                continue;
            }
            l=max(l,prod);
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            prod*=nums[i];
            if(nums[i]==0)
            {
                x=1;
                prod=1;
                continue;
            }
            r=max(r,prod);
        }
        if(x==1)
            return max(max(l,r),0);
        return max(l,r);
    }
};