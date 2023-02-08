//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int l=0,h=n-1,r=-1;
	    while(l<h)
	    {
	        int m=(l+h)/2;
	        if(arr[m]==x)
	        {
	            r=m;
	            break;
	        }
	        else if(x<arr[m])
	        h=m-1;
	        else
	        l=m+1;
	    }
	    if(r==-1 && arr[l]!=x)
	    return 0;
	    else if(r==-1 && arr[l]==x)
	    return 1;
	    int k=1,left=r-1,right=r+1;
	    while(left>=0 && arr[left]==x)
	    k++,left--;
	    while(right<n && arr[right]==x)
	    k++,right++;
	    return k;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends