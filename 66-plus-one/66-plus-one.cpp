class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        reverse(digits.begin(),digits.end());
        
        int carry=0;
        int sum = digits[0]+1;
        if(sum>9){
            sum=sum%10;
            carry=1;
        }
        res.push_back(sum);
        int i=1;
        while(i<digits.size()){
            sum = carry + digits[i];
            if(sum>9){
                sum = sum%10;
                carry=1;
            }else{
                carry = 0;
            }
            res.push_back(sum);
            i++;
        }
        
        if(carry>0){
            res.push_back(1);
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};