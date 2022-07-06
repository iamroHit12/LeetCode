class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX;
        int sum = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k = nums.size()-1;
            
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==target)
                    return target;
                else if(abs((nums[i]+nums[j]+nums[k])-target)<diff){
                    diff=abs((nums[i]+nums[j]+nums[k])-target);
                    sum = nums[i]+nums[j]+nums[k];
                }
                
                if(nums[i]+nums[j]+nums[k] > target)
                    k--;
                else
                    j++;
            }
        }
        
        return sum;
        
    }
};