class Solution {
public:
    int getLucky(string s, int k) {
        
        string sdigit;
        for(int i=0;i<s.size();i++)
        {
            int ch = s[i] - 'a' + 1;
            sdigit += to_string(ch);
        }
        
        int sm=0;
        for(int i=0;i<k;i++)
        {
            sm=0;
            for(int j=0;j<sdigit.size();j++)
            {
                sm+=sdigit[j]-'0';
            }
            
            sdigit = to_string(sm);
            
        }
        
        // cout<<sdigit<<endl;
        return sm;
    }
};