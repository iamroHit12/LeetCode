class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res1,res2,res3;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] < pivot)
                res1.push_back(nums[i]);
            else if(nums[i]==pivot)
                res2.push_back(nums[i]);
            else
                res3.push_back(nums[i]);
        }
        
        res1.insert(res1.end(),res2.begin(),res2.end());
        res1.insert(res1.end(),res3.begin(),res3.end());
        
        return res1;
    }
};