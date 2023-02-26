class Solution {
public:
    // void fin(vector<int>&can,int target,int i,int s,vector<int>temp,vector<vector<int>>&res)
    // {
    //     if(i==can.size())
    //     {
    //         if(s==target)
    //         {
    //             sort(temp.begin(),temp.end());
    //             if(find(res.begin(),res.end(),temp)==res.end())
    //                 res.push_back(temp);
    //         }  
    //         return;
    //     }
    //     else
    //         return;
    //     for(int j=i;j<can.size();j++)
    //     {
    //         s+=can[j];
    //         temp.push_back(can[j]);
    //         fin(can,target,i+1,s,temp,res);
    //         s-=can[j];
    //         temp.pop_back();
    //     }
    // }
//     void fin(vector<int>&can,int target,vector<int>temp,vector<vector<int>>&res,int i)
//     {
//         if(i==can.size())
//         {
//             if(target==0)
//             {
//                 sort(temp.begin(),temp.end());
//                 if(find(res.begin(),res.end(),temp)==res.end())
//                     res.push_back(temp);
//                 return;
//             }
//             return;
//         }
//         if(can[i]<=target){
//             temp.push_back(can[i]);
//             fin(can,target-can[i],temp,res,i+1);
//             temp.pop_back();
            
//             }
//         fin(can,target,temp,res,i+1);
        
        
//     }
    
    // vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    //     vector<int>temp;
    //     vector<vector<int>>res;
    //     findCombination(candidates,target,temp,res,0);
    //     return res;
    // }

    vector<vector<int> > combinationSum2(vector<int> &num, int target) 
    {
        vector<vector<int>> res;
        sort(num.begin(),num.end());
        vector<int> local;
        findCombination(res, 0, target, local, num);
        return res;
    }
    void findCombination(vector<vector<int>>& res, const int order, const int target, vector<int>& local, const vector<int>& num)
    {
        if(target==0)
        {
            res.push_back(local);
            return;
        }
        else
        {
            for(int i = order;i<num.size();i++) // iterative component
            {
                if(num[i]>target) return;
                if(i&&num[i]==num[i-1]&&i>order) continue; // check duplicate combination
                local.push_back(num[i]),
                findCombination(res,i+1,target-num[i],local,num); // recursive componenet
                local.pop_back();
            }
        }
    }
};