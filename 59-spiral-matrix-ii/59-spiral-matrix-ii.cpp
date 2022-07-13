class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int total = n*n;
        int colSize=n;
        int rowSize = n;
        vector<vector<int>> res( n , vector<int> (n, 0));
        
        int key=1;
        
        int row=0,col=0;
        
        while(key<=total){
            for(int i=col;i<colSize && key<=total;i++){
                res[row][i] = key;
                key++;
            }
            row++;
            for(int i=row;i<rowSize && key<=total;i++){
                res[i][colSize-1]=key;
                key++;
            }
            
            colSize--;
            
            for(int i=colSize-1;i>=col && key<=total;i--){
                res[rowSize-1][i]=key;
                key++;
            }
            
            rowSize--;
            
            for(int i=rowSize-1;i>=row && key<=total;i--){
                res[i][col]=key;
                key++;
            }
            
            col++;
        }
        
        return res;
    }
};