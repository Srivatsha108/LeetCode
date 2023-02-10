class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    //     int l=0,h=nums.size()-1;
    //     while(l<h)
    //     {
    //         int m=(l+h)/2;
    //         if(m==0 || m==nums.size()-1 ||(nums[m]!=nums[m-1] && nums[m]!=nums[m+1]))
    //             return nums[m];
    //         // if(h-l==1)
    //         // {
    //         //     if((l>0 && nums[l]==nums[l-1]) )
    //         //         return nums[h];
    //         //     else if(l==0)
    //         //         return nums[l];
    //         //     else if(nums[h]==nums[h+1])
    //         //         return nums[l];
    //         // }
    //         else if(nums[m]==nums[m-1])
    //         {
    //             if((m-l-1)%2==0)
    //                 l=m+1;
    //             else
    //                 h=m-1;
    //         }
    //         else if(nums[m]==nums[m+1])
    //         {
    //             if((h-m-1)%2==0)
    //                 h=m-1;
    //             else
    //                 l=m+1;
    //         }
    //     }
    //     return nums[l];
    // }
         if(nums.size()==1) return nums[0];
        int l=0, r=nums.size()-1, mid, num;
        
        while(l < r){
            mid = l+(r-l)/2;
            num = (mid%2 == 0) ? mid+1 : mid-1;
            if(nums[mid]==nums[num]) l = mid+1;
            else r = mid;
        }
        return nums[l];
    }

};