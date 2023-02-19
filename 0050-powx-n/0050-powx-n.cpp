class Solution {
public:
    double find(double x,long n,double k)
    {
        if(n==0)
            return k;
        if(n%2==0)
            return find(x*x,n/2,k);
        else return find(x,n-1,x*k);
    }
    double myPow(double x1, int n1) {
        long n=n1;
        double x=x1;
        double ans=1;
        if(n==0 || x==1 )
            return 1;
       return n>=0?find(x,n,ans):(double)(1.0)/(double)(find(x,-n,ans));   
    }
};