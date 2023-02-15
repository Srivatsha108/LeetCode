class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        // int res=0;
        // for(auto i:nums)
        //     res=res*10+i;
        // res+=k;
        // // cout<<res<<endl;
        // int res2=res,c=0;
        // while(res2!=0)
        // {
        //     c++;
        //     res2/=10;
        // }
        // // cout<<c<<endl;
        // nums.resize(c);
        // for(int i=c-1;i>=0;i--)
        //     nums[i]=res%10,res/=10;
        // return nums;
//         int i=nums1.size()-1;
//         while(i>=0 && k!=0)
//         {
            
//         }
        int i=nums.size()-1,c=0,s;
        while(i>=0 && k!=0)
        {
            s=0;
            s+=nums[i]+(k%10)+c;
            nums[i]=s%10;
            c=s/10;
            k/=10;
            i--;
            
        }
        
        if(k==0)
        {
            while(i>=0)
            {
                s=0;
                s+=nums[i]+c;
                nums[i]=(s%10);
                c=s/10;
                i--;
                
            }
            if(c!=0)
                nums.insert(nums.begin(),c);
        }
        else
        {
            while(k!=0)
            {
               s=0;
                s+=(k%10)+c;
                nums.insert(nums.begin(),s%10);
                c=s/10;
                k/=10;
            }
            if(c!=0)
                nums.insert(nums.begin(),c);
        }
        return nums;
    }
};