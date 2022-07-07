class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        map<int,int> m;
       
        for(int i=0;i<matrix.size();i++){
            m.clear();
            for(int j=0;j<matrix.size();j++){
                auto it = m.find(matrix[i][j]);
                
                if(it!=m.end())
                    return false;

                m[matrix[i][j]]++;
                
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            m.clear();
            for(int j=0;j<matrix[i].size();j++){
                auto it = m.find(matrix[j][i]);
                
                if(it!=m.end())
                    return false;

                m[matrix[j][i]]++;
            }
            
        }
        
        return true;
    }
};