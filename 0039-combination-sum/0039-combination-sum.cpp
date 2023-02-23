class Solution {
public:
    // void find(vector<int>&can,int target,int s,vector<vector<int>>&v,int i,vector<int>&temp)
    // {
    //     if(s>target)
    //         return;
    //     if(s==target)
    //     {
    //         v.push_back(temp);
    //         return;
    //     }
    //     // temp.push_back(can[i]);
    //     // s+=can[i];
    //     // find(can,target,s,v,i,temp);
    //     // s-=can[i];
    //     // temp.pop_back();
    //     for(;i<can.size();i++)
    //     {
    //         temp.push_back(can[i]);
    //         s+=can[i];
    //         find(can,target,s,v,i,temp);
    //         s-=can[i];
    //         temp.pop_back();
    //     }
    // }
    void find(vector<int>&can,int target,vector<vector<int>>&v,vector<int>&temp,int i)
    {
        if(i==can.size())
        {
            if(target==0)
            {
                v.push_back(temp);
                return;
            }
            else
                return;
        }
        if(can[i]<=target)
        {
            temp.push_back(can[i]);
            find(can,target-can[i],v,temp,i);
            temp.pop_back();
        }
        // temp.pop_back();
        find(can,target,v,temp,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<vector<int>>v;
        vector<int>temp;
     // find(candidates,target,0,v,0,temp);
        find(candidates,target,v,temp,0);
        return v;
    }
};