class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        while(i<=n){
            n=n-i;
            if(n>=i+1){
                i++;
            }else{
                break;
            }
        }
        
        return i;
    }
};