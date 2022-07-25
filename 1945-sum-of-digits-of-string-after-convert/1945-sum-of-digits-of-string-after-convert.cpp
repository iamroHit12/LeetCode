class Solution {
public:
    int getLucky(string s, int k) {
        string str = "";
        for(int i=0;i<s.size();i++){
            str+=to_string(s[i]-(97-1));
        }
        
        int sum=0;
        for(int i=0;i<k;i++){
            sum=0;
            for(int j=0;j<str.size();j++){
                sum+=(str[j]-48);
            }
            
            str=to_string(sum);
        }
        return sum; 
    }
};