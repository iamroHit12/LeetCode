class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        stack<int> st1,st2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                st1.push(nums[i]);
            }else{
                st2.push(nums[i]);
            }
        }
        
        for(int i=1;i<nums.size()+1;i++){
            if(i%2!=0){
                nums[i-1] = st1.top();
                st1.pop();
            }else{
                nums[i-1] = st2.top();
                st2.pop();
            }
        }
        
        return nums;
    }
};