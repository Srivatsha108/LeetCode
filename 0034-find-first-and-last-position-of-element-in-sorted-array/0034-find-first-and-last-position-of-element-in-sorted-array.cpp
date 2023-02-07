class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       
            
//         set<int>res;
//         vector<int>r;
//         int l=0,h=nums.size()-1;
//         while(l<h)
//         {
//             int m=(l+h)/2;
//             if(nums[m]==target){
                
//                 res.insert(m);
//                 if(nums[l]==target)
//                     res.insert(l);
//                 l=m+1;
//             }
//             else if(target<nums[m])
//                 h=m-1;
//             else
//                 l=m+1;
            
//         }
//         if(l<nums.size() && nums[l]==target && nums.size()>1)
//         {
//             r.push_back(l);
//             r.push_back(l);
//         }
//         if(res.size()==0)
//         {
//             r.push_back(-1);
//             r.push_back(-1);
//         }
//         else
//         {
//             r.push_back(*min_element(res.begin(),res.end()));
//             r.push_back(*max_element(res.begin(),res.end()));
                    
//         }
//                         return r;
        vector<int>res(2,-1);
        int l=0,h=nums.size()-1,left=-1,right=-1;
        while(l<h)
        {
            int m=(l+h)/2;
            if(nums[m]==target)
            {
             right=m;
                l=m+1;
            }
            else if(target<nums[m])
                h=m-1;
            else
                l=m+1;
        }
        if(l<nums.size() && nums[l]==target)
            right=l;
        l=0,h=nums.size()-1;
        while(l<h)
        {
            int m=(l+h)/2;
            if(nums[m]==target)
            {
             left=m;
                h=m-1;
            }
            else if(target<nums[m])
                h=m-1;
            else
                l=m+1;
        }
        if(l<nums.size() && nums[l]==target)
            left=l;
        res[0]=left,res[1]=right;
        return res;
    }
};