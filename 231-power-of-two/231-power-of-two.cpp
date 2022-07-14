class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1 || n==2 || n==16 || n==4)
            return true;
        
        if(n%2!=0)
            return false;
        
        if(n>2)
            return isPowerOfTwo(n/2);
        
        return false;
    }
};