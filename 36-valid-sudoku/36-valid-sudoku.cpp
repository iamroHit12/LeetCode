class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int> m;
        map<char,int> m1;
        map<char,int> m2;
        for(int i=0;i<board.size();i++){
            m.clear();
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                    auto it = m.find(board[i][j]);
                
                    if(it!=m.end())
                        return false;
                
                    m[board[i][j]]++;
                }
                
            }
        }
        
        
        for(int i=0;i<board.size();i++){
            m1.clear();
            for(int j=0;j<board[i].size();j++){
                if(board[j][i]!='.'){
                    auto it = m1.find(board[j][i]);
                
                    if(it!=m1.end())
                        return false;
                    
                    m1[board[j][i]]++;
                }
            }
            
        }
        
        for(int i=0;i<9;i++){
            if(i==3||i==6||i==0){
                m2.clear();
            }
            for(int j=0;j<3;j++){
                if(board[i][j]!='.'){
                    auto it = m2.find(board[i][j]);
                
                    if(it!=m2.end())
                        return false;
                    
                    m2[board[i][j]]++;
                }
            }
        }
        
        for(int i=0;i<9;i++){
            if(i==3||i==6||i==0){
                m2.clear();
            }
            for(int j=3;j<6;j++){
                if(board[i][j]!='.'){
                    auto it = m2.find(board[i][j]);
                
                    if(it!=m2.end())
                        return false;
                    
                    m2[board[i][j]]++;
                }
            }
        }
        
        for(int i=0;i<9;i++){
            if(i==3||i==6||i==0){
                m2.clear();
            }
            for(int j=6;j<9;j++){
                if(board[i][j]!='.'){
                    auto it = m2.find(board[i][j]);
                
                    if(it!=m2.end())
                        return false;
                    
                    m2[board[i][j]]++;
                }
            }
        }
        
        return true;
    }
};