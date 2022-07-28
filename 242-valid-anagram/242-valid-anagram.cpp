class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        map<char,int> mp1,mp2;
        
        for(int i=0;i<s.size();i++){
            mp1[s[i]]++;
        }
        
        for(int i=0;i<t.size();i++){
            mp2[t[i]]++;
        }
        
        map<char,int> :: iterator it1,it2;
        
        it1=mp1.begin();
        it2=mp2.begin();
        
        while(it1!=mp1.end() && it2!=mp2.end()){
            if(it1->first!=it2->first || it1->second!=it2->second)
                return false;
            
            it1++;
            it2++;
        }
        
        return true;
    }
};