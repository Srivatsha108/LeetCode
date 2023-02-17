class Solution {
public:
    bool isAnagram(string s, string t) {
     int c[26]={0};
     for(auto i:s)
         c[i-97]++;
    for(auto i:t)
        c[i-97]--;
    for(auto i:c)
        if(i!=0)
            return false;
        return true;
    }
};