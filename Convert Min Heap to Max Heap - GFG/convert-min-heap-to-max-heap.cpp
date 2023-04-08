//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void convertMinToMaxHeap(vector<int> &arr, int N){
    for(int i=(N-2)/2;i>=0;i--)
    solve(i,arr);
    }
    void solve(int i,vector<int>&arr)
    {
        int max=i,l=2*i+1,r=2*i+2;
        if(l<arr.size() && arr[l]>arr[max])
        max=l;
        if(r<arr.size() && arr[r]>arr[max])
        max=r;
        if(max!=i)
        {
            swap(arr[i],arr[max]);
            solve(max,arr);
        }
        
    }
    
};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        obj.convertMinToMaxHeap(vec,n);
        for(int i = 0;i<n;i++) cout << vec[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends