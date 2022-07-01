class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> all;
        bool flag = false;
        int count=0;
        
        for(int i=0;i<allowed.size();i++){
            all[allowed[i]]++;
        }
        
        for(int i=0;i<words.size();i++){
            flag = false;
            string s = words[i];
            for(int j=0;j<s.size();j++){
                auto it = all.find(s[j]);
                if(it==all.end()){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                count++;
            }
        }
        
        return count;
    }
};