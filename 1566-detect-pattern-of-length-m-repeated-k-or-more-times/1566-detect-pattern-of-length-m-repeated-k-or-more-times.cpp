class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        if(arr.size()<m*k)
            return false;
        for(int i=0;i<=arr.size()-m*k;i++)
        {
            int j=i,sum=1;
            vector<vector<int>>res;
            for(int p=0;p<k;p++)
            {
                vector<int>x(arr.begin()+j,arr.begin()+j+m);
            
                if(j==i)
                    res.push_back(x);
                else
                {
                    if(find(res.begin(),res.end(),x)!=res.end())
                        sum++;
                    else
                        break;
                }
                j+=m;
            }
            if(sum==k)
                return true;
        }
        return false;
    }
};