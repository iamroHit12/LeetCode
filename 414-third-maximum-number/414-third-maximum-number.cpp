class Solution {
public:
    int binary(vector<int> &nums,int l,int r,int key){
        int mid=0;
        while(l<=r){
            mid = l+(r-l)/2;
            
            if(nums[mid]==key)
                return mid;
            else if(nums[mid]>key)
                r = mid-1;
            else
                l=mid+1;
        }
        
        return -1;
    }
    int thirdMax(vector<int>& nums) {
        int i=0;
        int times;
        set<int> s(nums.begin(),nums.end());
        nums.clear();
        nums.assign(s.begin(),s.end());
        if(nums.size()<3)
            return *max_element(nums.begin(),nums.end());
        
        sort(nums.begin(),nums.end());
        while(i<2){
            int max = *max_element(nums.begin(),nums.end());
            int index = binary(nums,0,nums.size()-1,max);
            nums.erase(nums.begin()+index);
            
            i++;
        }
        
        return(*max_element(nums.begin(),nums.end()));
    }
};