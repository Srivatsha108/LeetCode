class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()>haystack.length())
        return -1;
        // for(int i=0;i<=haystack.length()-needle.length();i++)
        // {
        //     if(haystack[i]==needle[0])
        //     {
        //         string s=haystack.substr(i,needle.length());
        //         if(s==needle)
        //         return i;
        //     }
        // }
        // return -1;
        for(int i=0;i<=haystack.length()-needle.length();i++)
        {
            int j=0;
            for(;j<needle.size();j++)
            {
                if(haystack[i+j]!=needle[j])
                    break;
            }
            if(j==needle.size())
                return i;
        }
        return -1;
    }
};