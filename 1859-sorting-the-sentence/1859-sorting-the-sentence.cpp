class Solution {
public:
    string sortSentence(string s) {
        string str="";
        map<int,string> m;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                m.insert({s[i]-'0',str});
                str="";
                i++;
            }else{
                str+=s[i];
            }
        }
        
        string res="";
        
        for(auto it:m){
            res+=it.second;
            res+=" ";
        }
        
        res.erase(res.begin()+res.size()-1);
        
        return res;
    }
};