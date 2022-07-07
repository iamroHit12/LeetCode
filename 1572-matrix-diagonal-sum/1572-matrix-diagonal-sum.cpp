class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        map<int,int> m;
        int sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i==j){
                    sum=sum+mat[i][j];
                }
            }
        }
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat.size();j++){
                if(i+j==mat.size()-1){
                    sum=sum+mat[i][j];
                }
            }
        }
        
        if(mat.size()%2==1){
            sum=sum-mat[mat.size()/2][mat.size()/2];
        }
        
        return sum;
    }
};