class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        long long int sum = 0;
        if(nums.size()<4)
            return res;
        for(int i=0;i<nums.size()-3;i++){
            // if(i>0 && nums[i]==nums[i-1])
            //             continue;
            for(int j=i+1;j<nums.size()-2;j++){
                int k=j+1;
                int l=nums.size()-1;
                
                // if(j>i+1&&nums[j]==nums[j-1])
                //         continue;
                while(k<l){
                    
                    sum = (long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                    if(sum==target){
                        vector<int> v{nums[i],nums[j],nums[k],nums[l]};
                        res.push_back(v);
                        l--;
                    }else if(sum>target){
                        l--;
                    }else{
                        k++;
                    }
                }
            }
        }
        
        set<vector<int>>s(res.begin(),res.end());
        
        res.clear();
        
        copy(s.begin(),s.end(),back_inserter(res));
        
        return res;
    }
};