class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        unordered_map<int,int> mt;
        
        for(int i=0;i<target.size();i++){
            mt[target[i]]++;
        }
        
        int k=target[target.size()-1];
        
        for(int i=1;i<=k;i++){
            auto it = mt.find(i);
            
            if(it!=mt.end()){
                res.push_back("Push");
            }else{
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        
        return res;
    }
};