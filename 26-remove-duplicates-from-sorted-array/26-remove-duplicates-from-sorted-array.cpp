class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1;
        vector<int> res;
        res.push_back(nums[0]);
        while(j<nums.size()){
            if(nums[i]==nums[j])
                j++;
            else{
                res.push_back(nums[j]);
                i=j;
                if(j!=nums.size()-1)
                    j=i+1;
            }
        }
        
        for(int k=0;k<res.size();k++){
            nums[k] = res[k];
        }
        
        return res.size();
    }
};