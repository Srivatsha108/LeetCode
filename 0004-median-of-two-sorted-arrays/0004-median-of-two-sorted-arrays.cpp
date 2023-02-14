class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //approach1
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
        
        
        //approach2
// int cnt=0,m=nums1.size(),n=nums2.size(),x=0,i=0,j=0;
//         double prev=0,curr=0;
//         while(cnt<=(m+n)/2)
//         {
//             if(i<m && j<n)
//                 x=(nums1[i]<=nums2[j])?nums1[i++]:nums2[j++];
//             else if(i>=m)
//                 x=nums2[j++];
//             else
//                 x=nums1[i++];
//             if(cnt==(m+n)/2-1)
//                 prev=x;
//             if(cnt==(m+n)/2)
//                 curr=x;
//             cnt++;
            
            
//         }
//         if((m+n)%2!=0)
//             return curr;
//         return (prev+curr)/2;
        
        
        //approach3
        if(nums2.size()<nums1.size())
            return findMedianSortedArrays(nums2,nums1);
        int n1=nums1.size(),n2=nums2.size(),l=0,h=n1;
        while(l<=h)
        {
            int cut1=(l+h)/2;
            int cut2=(n1+n2+1)/2-cut1;
            
            int l1=cut1==0?INT_MIN:nums1[cut1-1],l2=cut2==0?INT_MIN:nums2[cut2-1],r1=cut1==n1?INT_MAX:nums1[cut1],r2=cut2==n2?INT_MAX:nums2[cut2];
            
            if(l1<=r2 && l2<=r1)
            {
                if((n1+n2)%2==0)
                    return (max(l1,l2)+min(r1,r2))/2.0;
                return max(l1,l2);
            }
            else if(l1>r2)
                h=cut1-1;
            else
                l=cut1+1;
        }
        return 0.0;
    }
};