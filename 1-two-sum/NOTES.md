int i,j;
bool flag=false;
for(i=0;i<nums.size()-1;i++){
for(j=i+1;j<nums.size();j++){
if(nums[i]+nums[j]==target){
flag = true;
break;
}
}
if(flag)
break;
}
vector<int> vec;
vec.push_back(i);
vec.push_back(j);
return vec;