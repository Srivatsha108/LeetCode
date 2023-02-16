class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int c=0;
        for(auto i:s)
        {
            if(i=='(' && c++>0)
                res+="(";
            if(i==')' && c-->1)
                res+=")";
        }
        return res;
    }
};