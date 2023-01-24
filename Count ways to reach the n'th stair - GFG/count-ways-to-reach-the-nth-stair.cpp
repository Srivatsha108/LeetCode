//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define mod 1000000007
class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int find(int n,vector<int>&dp)
    {
        if(n==0)
        return 1;
        if(n<0)
        return 0;
        if(dp[n]!=-1)
        return dp[n]%mod;
        return dp[n]=(find(n-1,dp)+find(n-2,dp))%mod;
    }
    
    int countWays(int n)
    {
        // your code here
        // vector<int>dp(n+1,-1);
        // return find(n,dp);
        vector<int>v(n);
        v[0]=1,v[1]=2;
        for(int i=2;i<n;i++)
        {
            v[i]=(v[i-1]+v[i-2])%mod;
        }
        return v[n-1]%mod;
    }
        
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends