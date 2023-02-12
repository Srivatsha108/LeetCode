class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        // int r=0,h=*max_element(piles.begin(),piles.end()),l=1;
        // while(l<=h)
        // {
        //     int m=l+(h-l)/2,r1=0;
        //     for(auto i:piles)
        //     {
        //         r1+=(i/m+(i%m)?1:0);
        //     }
        //     // if(r==0)
        //     //     r=r1;
        //     // if(r1<=h1)
        //     //     r=min(r,r1),h=m-1;
        //     if(r1>=h1)
        //         l=m+1;
        //     else
        //         h=m-1;
        // }
        // return r;
        int l = 1, r = 1000000000;
        while (l < r) {
            int m = (l + r) / 2, total = 0;
            for (int p : piles)
                total += (p + m - 1) / m;
            if (total > H)
                l = m + 1;
            else
                r = m;
        }
        return l;
    }
};