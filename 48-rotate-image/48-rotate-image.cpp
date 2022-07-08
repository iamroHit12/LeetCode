class Solution {
public:
    void swap(int *x,int *y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i+1;j<matrix[i].size();j++){
                // int temp = matrix[i][j];
                // matrix[i][j] = matrix[j][i];
                // matrix[j][i]=temp;
                
                swap(&matrix[i][j],&matrix[j][i]);
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                // int temp = matrix[i][j];
                // matrix[i][j] = matrix[i][n-j-1];
                // matrix[i][n-j-1] = temp;
                swap(&matrix[i][j],&matrix[i][n-j-1]);
            }
        }
    }
};