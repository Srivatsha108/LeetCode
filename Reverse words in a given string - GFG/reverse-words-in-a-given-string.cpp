//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        int i=s.length()-1;
        string temp,res;
        while(i>=0)
        {
            if(s[i]!='.')
            temp+=s[i];
            else
            {
                reverse(temp.begin(),temp.end());
                res+=temp;
                if(temp!="")
                res+='.';
                temp="";
            }
            i--;
        }
        reverse(temp.begin(),temp.end());
        res+=temp;
        if(s[0]=='.')
        return res.substr(0,res.size()-1);
        return res.substr(0,res.size());
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends