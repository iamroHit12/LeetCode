class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i=0,sum=0;
        vector<int> res;
        while(i<nums.size()){
            for(int j=0;j<=i;j++){
                sum = sum + nums[j];
            }
            res.push_back(sum);
            sum=0;
            i++;
        }
        
        return res;
    }
};