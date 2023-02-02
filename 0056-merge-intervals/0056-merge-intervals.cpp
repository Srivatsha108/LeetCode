class Solution {
public:
   static bool comp(vector<int>m1,vector<int>m2)
    {
        return m1[0]<=m2[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        // vector<vector<int>>res;
        // vector<vector<int>>r(1,in[0]);
        // for(int i=1;i<in.size();i++)
        // {
        //     if((r[0][0]>=in[i][0] && r[0][0]<=in[i][1]) || (in[i][0]>=r[0][0] && in[i][0]<=r[0][1]))
        //         r[0][0]=min(r[0][0],in[i][0]),r[0][1]=max(r[0][1],in[i][1]);
        //     else{
        //         res.push_back(r[0]);
        //         r[0][0]=in[i][0];
        //         r[0][1]=in[i][1];
        //     }
        // }
        // res.push_back(r[0]);
        // return res;
        // 
        vector<vector<int>> merged;
        for (auto interval : intervals) {
            // if the list of merged intervals is empty or if the current
            // interval does not overlap with the previous, simply append it.
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            }
            // otherwise, there is overlap, so we merge the current and previous
            // intervals.
            else {
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }
        return merged;
    }
};