class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int j=1;
        
        while(j>0){
            auto it = m.find(j);
            
            if(it==m.end()){
                break;
            }
            
            j++;
        }
        
        return j;
    }
};