class Solution {
public:
    int check(int x,long long sum){
        if(x==0)
            return sum;
        
        sum=sum*10 + (x%10);
        
        return check(x/10,sum);
    }
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        if(check(x,0)==x)
            return true;
        
        return false;
        
    }
};