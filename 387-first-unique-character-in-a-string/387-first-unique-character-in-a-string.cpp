class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        int min = INT_MAX;
        bool flag=false;
        for(auto it:m){
            if(it.second==1){
                size_t index = s.find(it.first);
                if(index<min)
                    min=index;
                flag=true;
            }
        }
        
        if(flag)
            return min;
        
        return -1;
    }
};