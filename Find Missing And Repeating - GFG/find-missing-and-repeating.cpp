//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *A, int n) {
        
        long long int len = n;

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<n; i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    int *ans=new int[2];

    ans[0]=repeating,ans[1]=missingNumber;


    return ans;
    
        // code here
        // map<int,int>mp;
        // for(int i=0;i<n;i++)
        // mp[arr[i]]++;
        // int *res=new int[2];
        // for(int i=1;i<=n;i++)
        // {
        //     if(mp.find(i)==mp.end())
        //     res[1]=i;
        //     if(mp[i]==2)
        //     res[0]=i;
            
        // }
        // return res;
        
        
        // long long r1=(n*(n+1))/2,r2=(n*(n+1)*(2*n+1))/6;
        // for(int i=0;i<n;i++)
        // r1-=arr[i],r2-=(arr[i]*arr[i]);
        // int *res=new int[2];
        // res[1]=(r1+(r2/r1))/2;res[0]=(res[1]-r1);
        // return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends