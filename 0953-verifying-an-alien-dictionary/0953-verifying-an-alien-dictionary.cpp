class Solution {
public:
    bool find(string s1,string s2,map<char,int>m)
    {
        int i=0,j=0;
        while(i<s1.length() && j<s2.length())
        {
            if(m[s1[i]]<m[s2[j]])
                return true;
            else if(m[s1[i]]>m[s2[j]])
                return false;
            
            i++,j++;
        }
        if(i==s1.length())
            return true;
        return false;
    }
    bool isAlienSorted(vector<string>& words, string order) {
     int c=0,j=0;
     map<char,int>mp;
        for(auto i:order)
        {
            mp[i]=j++;
        }
        // for(auto i:words)
        // {
        //     for(int j=0;j<i.length()-1;j++)
        //     {
        //         if(mp[i[j]]>mp[i[j+1]])
        //         {
        //             c=1;
        //             break;
        //         }
        //     }
        // }
        // return c==0;
        for(int i=0;i<words.size()-1;i++)
        {
            if(!find(words[i],words[i+1],mp))
                return false;
        }
        return true;
    }
};