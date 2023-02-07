class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        if(fruits.size()<=2)
            return fruits.size();
//         int res=0,i,j;
//         for(i=0;i<fruits.size()-2;i++)
//         {
//             map<int,int>mp;
//             mp[fruits[i]]++,mp[fruits[i+1]]++;
//             for(j=i+2;j<fruits.size();j++)
//             {
//                 if(mp.find(fruits[j])==mp.end() && mp.size()>=2)
//                     break;
//                 mp[fruits[j]]++;
//             }
            
//            auto it=mp.begin(),it1=++mp.begin();
//             res=max(res,it->second+it1->second);
//         }
//         return res;
           map<int,int>mp;
        int i,j;
        for( i=0,j=0;j<fruits.size();j++)
        {
            mp[fruits[j]]++;
            if(mp.size()>2)
            {
                if(--mp[fruits[i]]==0)mp.erase(fruits[i]);
                i++;
            }
            
        }
        return j-i;
    }
};