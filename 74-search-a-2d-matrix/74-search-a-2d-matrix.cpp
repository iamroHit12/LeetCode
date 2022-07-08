class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int k=matrix.size()-1;
        int m=matrix[0].size();
        
        while(i<=k){
            int mid = i+(k-i)/2;
            
            if(matrix[mid][0]==target)
                return true;
            
            if(i==k && matrix[mid][0]!=target){
                for(int j=1;j<m;j++){
                    if(matrix[i][j]==target)
                        return true;
                }
            }
            
            if(matrix[mid][0]>target){
                k=mid-1;
            }
            
            if(matrix[mid][0]<target && mid+1<matrix.size() && target<matrix[mid+1][0]){
                for(int j=1;j<m;j++){
                    if(matrix[mid][j]==target)
                        return true;
                }
            }
            
            if(matrix[mid][0]<target){
                i=mid+1;
            }
        }
        
        return false;
    }
};