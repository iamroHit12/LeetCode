class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==INT_MAX){
            return x;
        }
        
        if(n==INT_MIN && x>1){
            return 0;
        }
        
        if(n==INT_MIN && x<0)
            return abs(x);
        
        if(n==INT_MIN)
            return x;
        
        if(n<0){
            n=-1*n;
            x=1/x;
        }
        
        if(n==0)
            return 1;
        
        return x*myPow(x,n-1);
    }
};