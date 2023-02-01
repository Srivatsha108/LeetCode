//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int,int>mp;
        int s=1e9,res=0;
        for(int i=0;i<n;i++)
        {
            if(s==1e9)
            s=0;
            s+=A[i];
            if(mp.find(s)!=mp.end())
            res=max(res,i-mp[s]);
            else if(s==0)
            res=max(res,i+1);
            else
            mp[s]=i;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends