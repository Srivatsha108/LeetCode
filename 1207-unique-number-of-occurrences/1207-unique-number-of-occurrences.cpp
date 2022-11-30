class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(auto i:arr)
            m[i]++;
        set<int>s;
        for(auto i:m)
            s.insert(i.second);
        if(s.size()==m.size())
            return true;
        return false;
    }
};