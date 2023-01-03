//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        // vector<int>res;
        // int k=min(n,m);
        // if(k==n)
        // {
        //     int j=0,i=0;
        //      while(i<n)
        //      {
        //          if(arr1[i]<=arr2[j])
        //          {
        //              res.push_back(arr1[i]);
        //              i++;
        //          }
        //          else
        //          {
        //              res.push_back(arr2[j]);
        //              j++;
        //          }
        //      }
        // }
        // else{
        //     int j=0,i=0;
        //      while(i<m)
        //      {
        //          if(arr1[i]<=arr2[j])
        //          {
        //              res.push_back(arr1[i]);
        //              i++;
        //          }
        //          else
        //          {
        //              res.push_back(arr2[j]);
        //              j++;
        //          }
        //      }
        // }
        // return res;
        set<int>s;
        for(auto i=0;i<n;i++)
        {
            s.insert(arr1[i]);
        }
        for(auto i=0;i<m;i++)
        {
            s.insert(arr2[i]);
        }
        vector<int>r;
        for(auto i:s)
        r.push_back(i);
        return r;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends