class Solution {
public:
    int maxDepth(string s) {
        int c=0,res=INT_MIN;
        for(auto i:s)
        {
            if(i=='(')
                c++;
            if(i==')')
                res=max(res,c),c--;
        }
        return res==INT_MIN?0:res;
    }
};