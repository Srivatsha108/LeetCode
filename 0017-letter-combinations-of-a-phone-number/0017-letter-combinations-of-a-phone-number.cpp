class Solution {
public:
    vector<string>solve(vector<string>res,string s)
    {
        vector<string>temp;
        for(auto i:res)
            for(auto j:s)
                temp.push_back(i+j);
        // res=temp;
        return temp;
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.empty())
            return res;
        vector<string>v{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        
        res.push_back("");
//         for(auto digit:digits)
//         {
//             vector<string>temp;
//             for(auto j:v[digit-'0'])
//                 for(auto s:res)
//                     temp.push_back(s+j);
//             swap(res,temp);
//         }
//         return res;
        for(auto i:digits)
        {
            res=solve(res,v[i-'0']);
        }
        return res;
    }
};