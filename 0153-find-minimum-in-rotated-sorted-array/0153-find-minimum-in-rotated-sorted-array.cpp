class Solution {
public:
    int findMin(vector<int>& nums) {
     int l=0,h=nums.size()-1,mini=10000;
        while(l<h)
        {
            int m=(l+h)/2;
            if(nums[m]>=nums[l])
            {
                mini=min(mini,nums[l]);
                l=m+1;
            }
            else if(nums[m]<=nums[h])
            {
                mini=min(mini,nums[m]);
                h=m-1;
            }
        }
        return nums[l]<mini?nums[l]:mini;
    }
};