class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,h=*max_element(nums.begin(),nums.end()),r=h;
        while(l<=h)
        {
            int m=l+(h-l)/2,res=0;
            for(auto i:nums)
            {
                res+=i/m+((i%m)?1:0);
            }
            if(res<=threshold)
                r=min(r,m),h=m-1;
            else l=m+1;
        }
        return r;
    }
};