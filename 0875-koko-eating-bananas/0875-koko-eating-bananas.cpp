class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h1) {
        long h=*max_element(piles.begin(),piles.end()),l=1,r=h;
        while(l<=h)
        {
            long m=l+(h-l)/2,r1=0;
            for(auto i:piles)
            {
                r1+=(i/m+((i%m)?1:0));
            }
            if(r1<=h1)
                r=min(r,m),h=m-1;
            else l=m+1;
        }
        return r;
        
    }
};