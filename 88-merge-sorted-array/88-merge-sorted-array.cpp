class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
        vector<int> res1{nums1.begin(),nums1.begin()+m};
        vector<int> res2{nums2.begin(),nums2.begin()+n};
        
        nums1.clear();
        nums1.assign(res1.begin(),res1.end());
        nums1.insert(nums1.end(),res2.begin(),res2.end());
        sort(nums1.begin(),nums1.end());
    }
};