class Solution {
public:
    int mySqrt(int x) {
        long long int start = 0,end=x,mid;
        while(end>=start){
            mid = (end+start)/2;
            
            if(mid*mid==x){
                return mid;
            }else if(mid*mid>x){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        
        return start-1;
    }
};