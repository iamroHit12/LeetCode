class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> m;
        int count = 0;
        
        for(int i=0;i<stones.size();i++){
            m[stones[i]]++;
        }
        
        for(int i=0;i<jewels.size();i++){
            auto it = m.find(jewels[i]);
            
            if(it!=m.end()){
                count = count+it->second;
            }
        }
        
        return count;
    }
};