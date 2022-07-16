class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> res;
        for(int i=0;i<prices.size()-1;i++){
            bool flag=false;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    res.push_back(prices[i]-prices[j]);
                    flag=true;
                    break;
                }
            }
            if(!flag)
                res.push_back(prices[i]);
        }
        
        res.push_back(prices[prices.size()-1]);
        return res;
    }
};