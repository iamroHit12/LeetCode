class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int> v(202);
        int count=0;
        
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        
        for(int i=0;i<nums.size();i++){
            int val = nums[i]+k;
            count = count+v[val];
        }
        
        
        
        return count;
    }
};