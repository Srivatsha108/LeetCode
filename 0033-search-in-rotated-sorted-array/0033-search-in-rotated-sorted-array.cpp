class Solution {
public:
    int search(vector<int>& a, int target) {
        // int l=0,h=a.size()-1;
        // while(l<h)
        // {
        //     int m=(l+h)/2;
        //     if(a[m]==target)
        //         return m;
        //     if(m>1 && a[m]>a[m-1] && a[m]<a[m+1])
        //     {
        //         if(target<a[m])
        //             h=m-1;
        //         else
        //             l=m+1;
        //     }
        //     else
        //     {
        //         if(target<a[m] && target<=a[a.size()-1])
        //             l=m+1;
        //         else if(target>a[m] && target<=a[a.size()-1])
        //         else
        //             h=m-1;
        //     }
        // }
        // return a[l]==target?l:-1;
        int l=0,h=a.size()-1;
        while(l<h)
        {
            int m=(l+h)/2;
            if(a[m]==target)
                return m;
            if(a[m]>=a[l])
            {
                
                if(target>=a[l] && target<=a[m])
                {
                   h=m-1;
                }
                else
                    l=m+1;
            
            }
            else
            {
                if(target>=a[m] && target<=a[h])
                    l=m+1;
                else
                    h=m-1;
            }
            
        }
        return a[l]==target?l:-1;
    }
};