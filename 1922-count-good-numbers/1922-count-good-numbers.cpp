class Solution {
public:
    int mod=1e9+7;
    int countGoodNumbers(long long n) {
        long long ans1=1,ans2=1,b1=5,b2=4,n1=n,ans;
        n=n/2;
        while(n)
        {
            if(n%2==0)
            {
               b1=((b1%mod)*(b1%mod))%mod,b2=((b2%mod)*(b2%mod))%mod;
                n=n/2;
            }
            else
            {
                ans1=((ans1%mod)*(b1%mod))%mod,ans2=((ans2%mod)*(b2%mod))%mod;
                n-=1;
            }
        }
        if(n1%2!=0)
            ans1=((ans1%mod)*5)%mod;
        
        // cout<<ans1<<" "<<ans2<<endl;
        // return  ((ans1)%(1e9+7)*(ans2)%(1e9+7))%(1e9+7));
        ans=( (ans1)%mod * (ans2)%mod )%(mod);
        return (int)ans;
    }
};