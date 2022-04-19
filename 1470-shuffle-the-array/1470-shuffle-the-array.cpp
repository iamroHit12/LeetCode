class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec1{nums.begin(),nums.begin()+n};
        vector<int> vec2{nums.begin()+n,nums.end()};
        
        vector<int> res;
        int i=0;
        while(i<n){
            res.push_back(vec1[i]);
            res.push_back(vec2[i]);
            i++;
        }
        
        return res;
    }
};