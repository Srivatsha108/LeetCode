class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int l=0,h=matrix.size()-1,x=matrix[0].size()-1,r=-1;
     while(l<h)
     {
         int m=(l+h)/2;
         if(target>=matrix[m][0] && target<=matrix[m][x]){
             r=m;
             break;
         }
         else if(target<matrix[m][0])
             h=m-1;
         else
             l=m+1;
             
     }
     r=r!=-1?r:l;
         l=0,h=x;
         while(l<h)
         {
             int m=(l+h)/2;
             if(matrix[r][m]==target)
                 return true;
             else if(target<matrix[r][m])
                 h=m-1;
             else
                 l=m+1;
         }
         return matrix[r][l]==target?true:false;
    
        
     
    }
};