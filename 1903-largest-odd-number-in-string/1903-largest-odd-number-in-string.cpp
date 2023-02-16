class Solution {
public:
    string largestOddNumber(string num) {
        
        // int i=num.length()-1;
        // while(i>=0 && num[i]%2==0 )
        //     i--;
        // if(i<0)
        //     return "";
        // return num.substr(0,i+1);
        int i=0;
        string r,s;
        for(int i=0;i<num.length();i++)
        {
            
            // if(num[i]%2==0)
            s+=num[i];
            if(num[i]%2!=0)
                r=max(r,s);
                
                
            
        }
        return r;
    }
};