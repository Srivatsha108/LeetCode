class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     // double res;
     // int i=0,j=0,c=0,m=nums1.size(),n=nums2.size();
     //    while(c<(m+n)/2)
     //    {
     //        if(i<m && j<n)
     //            res=nums1[i]<=nums2[j]?nums1[i++]:nums2[j++];
     //        else if(i>=m)
     //            res=nums2[j++];
     //        else if(j>=n)
     //            res=nums1[i++];
     //        // res=i<m && nums1[i]<=nums2[j]?nums1[i++]:nums2[j++];
     //        c++;
     //    }
     //    if((m+n)%2!=0)
     //    {
     //        if(i<m && j<n)
     //            return nums1[i]<=nums2[j]?nums1[i]:nums2[j];
     //        if(i>=m)
     //            return nums2[j];
     //        return nums1[i];
     //    }
     //    if(i<m && j<n)
     //        return (res+(nums1[i]<=nums2[j]?nums1[i]:nums2[j]))/2;
     //    if(i>=m)
     //        return (res+nums2[j])/2;
     //    // if(j>=n)
     //        return (res+nums1[i])/2;
int cnt=0,m=nums1.size(),n=nums2.size(),x=0,i=0,j=0;
        double prev=0,curr=0;
        while(cnt<=(m+n)/2)
        {
            if(i<m && j<n)
                x=(nums1[i]<=nums2[j])?nums1[i++]:nums2[j++];
            else if(i>=m)
                x=nums2[j++];
            else
                x=nums1[i++];
            if(cnt==(m+n)/2-1)
                prev=x;
            if(cnt==(m+n)/2)
                curr=x;
            cnt++;
            
            
        }
        if((m+n)%2!=0)
            return curr;
        return (prev+curr)/2;
    }
};