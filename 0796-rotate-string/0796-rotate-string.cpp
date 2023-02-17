class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
            return false;
        // int i=0,j=0;
        // while(i<s.length() && s[i]!=goal[0])i++;
        // if(i==s.length())
        //     return false;
        // while(i<s.length() && s[i]==goal[j])
        //     i++,j++;
        // if(i!=s.length())
        //     return false;
        // i=0;
        // while(j<goal.length() && goal[j]==s[i])
        //     j++,i++;
        // if(j!=goal.length())
        //     return false;
        // return true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==goal[0])
            {
                string res=s.substr(i)+s.substr(0,i);
                if(res==goal)
                    return true;
            }
        }
        return false;
    }
};