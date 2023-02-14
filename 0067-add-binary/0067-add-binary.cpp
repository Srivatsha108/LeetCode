class Solution {
public:
    string addBinary(string a, string b) {
        int n=min(a.length(),b.length());
        string res;
        int c=0,x=a.length()-1,y=b.length()-1;
        for(int i=0;i<n;i++)
        {
            int s=(c+(a[x]-'0')+(b[y]-'0'));
            if(s==0)
            res+='0';
            else if(s==1)
            res+='1',c=0;
            else if(s==2)
            res+='0',c=1;
            else
            res+='1',c=1;
            x--,y--;

        }
        while(x>=0)
        {
            int s=c+(a[x]-'0');
            if(s==0)
            res+='0';
            else if(s==1)
            res+='1',c=0;
            else
            res+='0',c=1;
            x--;
        }
         while(y>=0)
        {
            int s=c+(b[y]-'0');
            if(s==0)
            res+='0';
            else if(s==1)
            res+='1',c=0;
            else
            res+='0',c=1;
            y--;
        }
        if(c==1)
        res=res+'1';
        reverse(res.begin(),res.end());
        return res;
    }
};