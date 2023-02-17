class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
     int c[26]={0};
     for(int i=0;i<s.length();i++)
         c[s[i]-97]++,c[t[i]-97]--;
    
    for(auto i:c)
        if(i!=0)
            return false;
        return true;
    }
};