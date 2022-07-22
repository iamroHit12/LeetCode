class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res1,res2;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                res1.push_back(nums[i]);
            else
                res2.push_back(nums[i]);
        }
        
        vector<int> res3;
        
        for(int i=0;i<res1.size();i++){
            res3.push_back(res1[i]);
            res3.push_back(res2[i]);
        }
        
        return res3;
    }
};