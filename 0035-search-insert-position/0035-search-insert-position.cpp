class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,m;
        while(l<h)
        {
            m=(l+h)/2;
            if(nums[m]==target)
            return m;
            else if(target<nums[m])
            h=m-1;
            else
            l=m+1;
        }
        return nums[l]<target?l+1:l;
    }
};