class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // vector<int>r(m+n,-1);
        // int i=0,j=0,k=0;
        // while(i<m && j<n)
        // {
        //     if(nums1[i]<=nums2[j])
        //         r[k++]=nums1[i++];
        //     else
        //         r[k++]=nums2[j++];
        // }
        // while(i<m)
        //     r[k++]=nums1[i++];
        // while(j<n)
        //     r[k++]=nums2[j++];
        // nums1=r;
        if(m==0)
        {
            nums1=nums2;
            return;
        }
        if(n==0)
            return;
        for(int i=0;i<m;i++)
        {
            if(nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                int k=nums2[0],j=1;
                while(j<n && nums2[j]<=k){
                    nums2[j-1]=nums2[j];
                    j++;
                }
                nums2[j-1]=k;
            }
        }
        int j=0;
        for(int i=m;i<m+n;i++)
            nums1[i]=nums2[j++];
        
    }
};