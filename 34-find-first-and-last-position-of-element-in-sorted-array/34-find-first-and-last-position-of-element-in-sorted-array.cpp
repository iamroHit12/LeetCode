class Solution {
public:
    int first(vector<int> &nums,int low,int high,int target){
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                if(mid==0 || nums[mid]!=nums[mid-1])
                    return mid;
                else
                    high = mid-1;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return -1;
    }
    int second(vector<int> &nums,int low,int high,int target){
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target){
                if(mid==nums.size()-1 || nums[mid]!=nums[mid+1])
                    return mid;
                else
                    low = mid+1;
            }else if(nums[mid]>target){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int first_exist = first(nums,0,nums.size()-1,target);
        int second_exist = second(nums,0,nums.size()-1,target);
        
        res.push_back(first_exist);
        res.push_back(second_exist);
        
        return res;
    }
};