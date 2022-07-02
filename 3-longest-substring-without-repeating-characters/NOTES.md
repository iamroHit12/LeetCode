int lengthOfLongestSubstring(string s) {
vector<string> v;
map<string,int> m;
for(int i=0;i<s.size();i++){
string substr;
for(int j=i;j<s.size();j++){
substr+=s[j];
v.push_back(substr);
}
}
for(int i=0;i<v.size();i++){
m[v[i]]++;
}
int max=0;
bool flag = true;
for(auto it:m){
flag = true;
string str = it.first;
map<char,int> m1;
for(int i=0;i<str.size();i++){
m1[str[i]]++;
}
for(auto it1:m1){
if(it1.second>1){
flag = false;
}
}
if(flag){
max = max>str.size()?max:str.size();
}
}
return max;
}