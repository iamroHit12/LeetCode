class Solution {
public:
    vector<int> check(string s){
        unordered_map<char,int> m;
        vector<int> pat;
        if(s.size()==0)
            return pat;
        int n=0;
        for(int i=0;i<s.size();i++){
            auto it = m.find(s[i]);
            
            if(it!=m.end()){
                pat.push_back(m[s[i]]);
            }else{
                n++;
                m.insert({s[i],n});
                pat.push_back(n);
            }
        }
        
        return pat;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        vector<int> pat;
        pat=check(pattern);
        
        for(int i=0;i<words.size();i++){
            vector<int> vec;
            vec=check(words[i]);
            if(vec==pat)
                res.push_back(words[i]);
        }
        
        return res;
    }
};