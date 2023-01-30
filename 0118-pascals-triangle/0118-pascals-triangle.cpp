class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res;
        vector<int>v(1,1);
        res.push_back(v);
        for(int i=1;i<n;i++)
        {
            vector<int>r;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                    r.push_back(1);
                else
                    r.push_back(res[i-1][j]+res[i-1][j-1]);
            }
            res.push_back(r);
        }
        return res;
    }
};