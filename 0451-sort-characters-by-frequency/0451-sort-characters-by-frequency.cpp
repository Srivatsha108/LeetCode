class Solution {
public:
//    static bool cmp(pair<char,int>a,pair<char,int>b)
//    {
//        return a.second>=b.second;
//    }
    static bool comp(pair<char,int>a,pair<char,int>b)
    {
        // cnt[a] > cnt[b] || (cnt[a] == cnt[b] && a < b)
        // if(a.second>b.second)
        //     return true;
        // if(a.second==b.second)
        //     return a.first<b.first;
        // // return a.second>=b.second;
        // return false;
        return a.second>b.second || (a.second==b.second && a.first<b.first);
    }
    string frequencySort(string s) {
//         map<char,int>mp;
//         for(auto i:s)
//         mp[i]++;
//         vector<pair<char,int>>v;
//         for(auto i:mp)
//         v.push_back(i);
//         sort(v.begin(),v.end(),cmp);
//         string res;
//         for(auto i:v)
//         {
//             for(int j=0;j<i.second;j++)
//             res+=i.first;
//         }
//         return res;
// unordered_map<char, int> freq;
//         for (auto a : s) freq[a]++;
        
//         priority_queue<pair<int, char>> q;
//         for (auto [a, frq] : freq) q.push({frq, a});
        
//         string res;
//         pair<int, char> curr;
//         while (!q.empty()) {
//             curr = q.top();
//             q.pop();
//             res += string(curr.first, curr.second);
//         }
        
//         return res;
        map<char,int>mp;
        vector<pair<char,int>>v;
        for(auto i:s)
            mp[i]++;
        for(auto i:mp)
            v.push_back(i);
        sort(v.begin(),v.end(),comp);
        string res;
        for(auto i:v)
        {
            for(int j=0;j<i.second;j++)
                res+=i.first;
        }
        return res;
            
    }
};