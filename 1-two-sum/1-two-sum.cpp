class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int,int> m;
        int val;
        // for(int i=0;i<nums.size();i++){
        //     m[nums[i]]++;
        // }
        
        for(int i=0;i<nums.size();i++){
            auto it = m.find(target-nums[i]);
            if(it!=m.end()){
                res.push_back(i);
                val = target-nums[i];
                break;
            }
            m[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                res.push_back(i);
                break;
            }
        }
        
        return res;
    }
};