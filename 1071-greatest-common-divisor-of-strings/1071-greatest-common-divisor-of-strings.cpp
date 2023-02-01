class Solution {
public:
    int gcd(int s1,int s2)
    {
        if(s1%s2==0)
            return s2;
        return gcd(s2,s1%s2);
    }
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1)
            return "";
        return str1.substr(0,gcd(str1.length(),str2.length()));
    }
};