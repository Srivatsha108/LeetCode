//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

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
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    
    sort(arr,arr+n);
    //lower bound
    int l=0,h=n-1,ub=-1,lb=-1;
    while(l<h)
    {
        int m=(l+h)/2;
        if(arr[m]<=x)
        lb=m,l=m+1;
        else if(x<arr[m])
        h=m-1;
    }
    if(arr[l]<=x)
    {
        if(lb==-1)
        lb=l;
        else if(l>lb)
        lb=l;
    }
    //upper bound
    l=0,h=n-1;
    while(l<h)
    {
        int m=(l+h)/2;
        if(arr[m]>=x)
        ub=m,h=m-1;
        else if(x>arr[m])
        l=m+1;
    }
    if(arr[l]>=x)
    {
        if(ub==-1)
        ub=l;
        else if(l<ub)
        ub=l;
    }
    int x1=lb!=-1?arr[lb]:-1,y=ub!=-1?arr[ub]:-1;
    pair<int,int>res(x1,y);
    return res;
    
}