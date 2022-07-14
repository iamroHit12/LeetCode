class Solution {
public:
    void reverse(vector<char> &s,int l,int r){
        if(l>=r)
            return;
        
        char ch = s[l];
        s[l] = s[r];
        s[r] = ch;
        
        reverse(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        reverse(s,0,s.size()-1);
    }
};