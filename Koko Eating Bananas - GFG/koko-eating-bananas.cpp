//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int l=1,h=*max_element(piles.begin(),piles.end()),res=h;
        while(l<=h)
        {
           int m=(l+h)/2,k=0;
           for(auto i:piles)
           k+=(i/m)+(i%m?1:0);
           if(k<=H)
           res=min(res,m),h=m-1;
           else
           l=m+1;
           
           
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends