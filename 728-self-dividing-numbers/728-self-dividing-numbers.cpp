class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        while(left<=right){
            bool flag=true;
            int n=left;
            
            while(n>0){
                int r=n%10;
                
                if(r==0){
                    flag=false;
                    break;
                }
                else{
                    if(left%r!=0){
                        flag=false;
                    }
                }
                
                n=n/10;
            }
            
            if(flag)
                vec.push_back(left);
            
            left++;
        }
        
        return vec;
    }
};