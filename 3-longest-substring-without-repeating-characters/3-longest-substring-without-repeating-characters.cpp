class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char,int> mp;
        int prev=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]!=0){
                prev=max(prev,mp[s[i]]);
            }
            // cout<<prev<<" "<<i<<endl;
            mp[s[i]]=i+1;
            ans=max(ans,i-prev+1);
        }
        return ans;
    }
};