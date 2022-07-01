class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> m;
        int count = 0;
        
        for(int i=0;i<nums.size();i++){
            auto it = m.find(nums[i]);
            
            if(it != m.end()){
                count = count + it->second;
            }
            
            m[nums[i]]++;
        }
        
        return count;
    }
};