class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            auto it = find(nums2.begin(),nums2.end(),nums1[i]);
            
            int index = it-nums2.begin();
            
            bool flag=false;
            if(index!=nums2.size()-1){
                for(int j=index+1;j<nums2.size();j++){
                    if(nums2[index]<nums2[j]){
                        flag=true;
                        res.push_back(nums2[j]);
                        break;
                    }
                }
                if(!flag)
                    res.push_back(-1);
            }else{
                res.push_back(-1);
            }
        }
        
        return res;
    }
};