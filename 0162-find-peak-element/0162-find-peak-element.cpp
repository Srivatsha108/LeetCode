class Solution {
public:
    int findPeakElement(vector<int>& nums) {
//         int n=nums.size();
//         if(n==1 || nums[0]>nums[1])
//             return 0;
//         if(nums[n-1]>nums[n-2])
//             return n-1;
//         int l=0,h=n-1;
//         while(l<h)
//         {
//             int m=(l+h)/2;
//             if(nums[m]>nums[m-1] && nums[m]>nums[m+1])
//                 return m;
//             l=m+1;
            
//         }
//         l=0,h=n-1;
//         while(l<h)
//         {
//             int m=(l+h)/2;
//             if(m>0 && nums[m]>nums[m-1] && nums[m]>nums[m+1])
//                 return m;
//             h=m-1;
            
//         }
//         int x=n/2,y=n/2+1,z=n/2-1;
//         if(nums[x]>nums[x+1] && nums[x]>nums[x-1])
//             return x;
//         if(nums[y]>nums[y-1] && nums[y]>nums[y+1])
//             return y;
//         if(nums[z]>nums[z-1] && nums[z]>nums[z+1])
//             return y;
//         return -1;
        int l=0,h=nums.size()-1;
        while(l<h)
        {
            int m=(l+h)/2;
            if(m==0)
                return nums[0]>nums[1]?0:1;
            if(m==nums.size()-1)
                return nums[m]>nums[m-1]?m:m-1;
            if(nums[m]>nums[m-1] && nums[m]>nums[m+1])
                return m;
            else if(nums[m]<nums[m-1])
                h=m-1;
            else
                l=m+1;
        }
        return l;
    }
};