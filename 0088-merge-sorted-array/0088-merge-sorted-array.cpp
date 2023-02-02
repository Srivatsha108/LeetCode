class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>r(m+n,-1);
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
                r[k++]=nums1[i++];
            else
                r[k++]=nums2[j++];
        }
        while(i<m)
            r[k++]=nums1[i++];
        while(j<n)
            r[k++]=nums2[j++];
        nums1=r;
    }
};