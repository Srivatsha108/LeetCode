class Solution {
public:
    string reverseWords(string s) {
//         int i=0;
//         string ans;
//         char ch;
//         while(i<s.length())
//         {
//             if(isspace(s[i]) && isspace(ch))
//             {}
//             else if(isspace(s[i]) && !isspace(ch))
//                 ans+=s[i];
//             else if(!isspace(s[i]) && isspace(ch))
//                 ans+=s[i];
//             else
//                 ans+=s[i];
//             ch=s[i];
//             i++;
            
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//         int i=s.length()-1,word=0;
//         string ans,temp;
//         char ch;
//         while(i>=0)
//         {
//             if(ch=='\0' || (isspace(ch) && word==0)){}
//              if(isspace(s[i]) && isspace(ch))
//             {}
//             else if(isspace(s[i]) && !isspace(ch))
//             {
//                 reverse(temp.begin(),temp.end());
//                 ans+=temp+" ";
//                 temp="";
//                 word=1;
//             }
//             else if(!isspace(s[i]) && isspace(ch))
//             {
//                 // temp="";
//                 temp+=s[i];
                
//             }
//             else if(!isspace(s[i]) && !isspace(ch))
//             {
//                 temp+=s[i];
//                 word=1;
            
//             }
//             ch=s[i];
//             i--;
                
//         }
//         reverse(temp.begin(),temp.end());
//         return ans+temp;
        int i=s.length()-1;
        string res,temp;
        while(i>=0)
        {
            if(!isspace(s[i]))
                temp+=s[i];
            else
            {
                reverse(temp.begin(),temp.end());
                res+=temp;
                if(temp!="")
                    res+=" ";
                temp="";
            }
            i--;
        }
        reverse(temp.begin(),temp.end());
        res+=temp;
        if(isspace(s[0]))
        return res.substr(0,res.size()-1);
        return res.substr(0,res.size());
    }
};