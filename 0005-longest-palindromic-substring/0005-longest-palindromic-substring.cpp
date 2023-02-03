class Solution {
public:
    bool palin(string s1)
    {
        int i=0,j=s1.length()-1;
        while(i<j)
        {
            if(s1[i]!=s1[j])
            return false;
            i++,j--;
        }
        return true;
    }
    string find(string s, int n,int i,string res)
    {
           if(i==n)
           {
                return res;
           }
           string s1=find(s,n,i+1,res+s[i]);
           string s2=find(s,n,i+1,res);
           if(palin(s1))
           {
               return palin(s2)?(s1.length()>=s2.length()?s1:s2):s1;
           }
           if(palin(s2))
           {
                return palin(s1)?(s2.length()>=s1.length()?s2:s1):s2;
           }
           return "";
    }
    string longestPalindrome(string s) {
        // if(s.length()==1)
        // return s;
        // int n=s.length();
        // int m=1;
        // string ans=s.substr(0,1);
        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         string s1=s.substr(i,j-i+1);string s2=s1;
        //         reverse(s1.begin(),s1.end());
        //         if(s1==s2)
        //         if(s1.length()>m)
        //         m=s1.length(),ans=s1;
        //     }
        // }
        // return ans;
        // vector<int>dp(n+1,-1);
        // return find(s,s.length(),0,"");
        if (s.empty()) return "";
    if (s.size() == 1) return s;
    int min_start = 0, max_len = 1;
    for (int i = 0; i < s.size();) {
      if (s.size() - i <= max_len / 2) break;
      int j = i, k = i;
      while (k < s.size()-1 && s[k+1] == s[k]) ++k; // Skip duplicate characters.
      i = k+1;
      while (k < s.size()-1 && j > 0 && s[k + 1] == s[j - 1]) { ++k; --j; } // Expand.
      int new_len = k - j + 1;
      if (new_len > max_len) { min_start = j; max_len = new_len; }
    }
    return s.substr(min_start, max_len);
    }
};