class Solution {
public:
    int lengthOfLastWord(string s) {
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ')
                s.pop_back();
            else
                break;
        }
        
        string str="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' ')
                str+=s[i];
            else if(s[i]==' ')
                break;
        }
        
        return str.size();
        
    }
};