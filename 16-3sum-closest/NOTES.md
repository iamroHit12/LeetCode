class Solution {
public:
void subs(int ind,vector<int>&res,vector<int> &nums,int n,vector<int> &v){
if(ind>=n){
if(res.size()==3){
v.push_back(accumulate(res.begin(), res.end(), 0));
}
return;
}
res.push_back(nums[ind]);
subs(ind+1,res,nums,n,v);
res.pop_back();
subs(ind+1,res,nums,n,v);
}
int threeSumClosest(vector<int>& nums, int target) {
vector<int> res;
vector<int> v;
subs(0,res,nums,nums.size(),v);
vector<int> a(v.size());
for(int i=0;i<v.size();i++){
a[i]=abs(v[i]-target);
}