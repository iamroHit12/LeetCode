class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> res;
        
        int total = n*m;
        int count = 0;
        
        int row = 0;
        int col = 0;
        
        while(count<total){
            for(int i=col;i<m && count<total;i++){
                res.push_back(matrix[row][i]);
                count++;
            }
            
            row++;
            
            for(int i=row;i<n && count<total;i++){
                res.push_back(matrix[i][m-1]);
                count++;
            }
            
            m--;
            
            for(int i=m-1;i>=col && count<total;i--){
                res.push_back(matrix[n-1][i]);
                count++;
            }
            
            n--;
            
            for(int i=n-1;i>=row && count<total;i--){
                res.push_back(matrix[i][col]);
                count++;
            }
            
            col++;

        }
        
        return res;
    }
};