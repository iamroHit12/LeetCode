class Solution {
public:
    void reverse(string &str){
        int i=0;
        int j=str.size()-1;
        
        while(i<j){
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            
            i++;
            j--;
        }
    }
    string reverseWords(string s) {
        string str;
        string temp="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(temp);
                str+=temp;
                str+=" ";
                temp="";
            }else{
                temp+=s[i];
            }
        }
        reverse(temp);
        str+=temp;
        
        return str;
    }
};