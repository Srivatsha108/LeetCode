class Solution {
public:
    int minDays(vector<int>& bloomDay, int m1, int k) {
        long a=m1,b=k,c=bloomDay.size();
        if(a*b>c)
            return -1;
        long res=0,l=0,h=*max_element(bloomDay.begin(),bloomDay.end()),r=h;
        while(l<=h)
        {
            long m=l+(h-l)/2,x=0,res=0;
            for(auto i:bloomDay)
            {
                if(i<=m)
                    x++;
                else 
                    x=0;
                if(x==k)
                    x=0,res++;
                
            }
            if(res>=m1)
                r=min(r,m),h=m-1;
            else
                l=m+1;
            
        }
        return r;
    }
};