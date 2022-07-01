class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v(101);
        vector<int> res(nums.size());
        
        for(int i=0;i<nums.size();i++){
            v[nums[i]]++;
        }
        
        for(int i=1;i<101;i++){
            v[i] = v[i]+v[i-1];
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                res[i]=0;
            }else{
                res[i] = v[nums[i]-1];
            }
        }
        
        return res;
        
    }
};