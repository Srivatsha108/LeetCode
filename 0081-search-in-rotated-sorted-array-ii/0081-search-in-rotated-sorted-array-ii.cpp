class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(nums[m]==target)
                return true;
            if((nums[l] == nums[m]) && (nums[h] == nums[m]))
            {
                l++;
                h--;
            }
            else if(nums[m]>=nums[l])
            {
                if(target>=nums[l] && target<nums[m])
                    h=m-1;
                else
                    l=m+1;
            }
            else
            {
                if(target>nums[m] && target<=nums[h])
                    l=m+1;
                else
                    h=m-1;
            }
        }
        return false;
    }
};