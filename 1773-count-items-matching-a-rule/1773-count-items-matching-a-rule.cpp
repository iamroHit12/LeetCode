class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map<string,int> type,color,name;
        
        for(int i=0;i<items.size();i++){
            type[items[i][0]]++;
        }
        
        for(int i=0;i<items.size();i++){
            color[items[i][1]]++;
        }
        
        for(int i=0;i<items.size();i++){
            name[items[i][2]]++;
        }
        
        int count=0;
            
        if(ruleKey=="type"){
            count = type[ruleValue];
        }
        
        if(ruleKey=="color"){
            count = color[ruleValue];
        }
        
        if(ruleKey=="name"){
            count = name[ruleValue];
        }
        
        return count;
        
    }
};