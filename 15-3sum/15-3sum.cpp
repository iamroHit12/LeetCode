class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i1 = 0;i1+2<nums.size();i1++){
            if(i1>0 && nums[i1] == nums[i1-1])
                continue;
            int i2 = i1+1;
            int i3 = nums.size()-1;
            
            while(i2<i3){
                int sum = nums[i1] + nums[i2] + nums[i3];
                if(sum == 0){
                    vector<int> v{nums[i1],nums[i2],nums[i3]};
                    res.push_back(v);
                    i3--;
                    
                    while(i2<i3 && nums[i3] == nums[i3+1])
                        i3--;
                }else if(sum<0)
                    i2++;
                else
                    i3--;
            }
            
        }
        
        return res;
    }
};