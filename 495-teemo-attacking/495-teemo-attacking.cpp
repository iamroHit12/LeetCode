class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int count=0;
        if(duration==0)
            return 0;
        for(int i=0;i<timeSeries.size()-1;i++){
            int val = (timeSeries[i]-1)+duration;
            if(val<timeSeries[i+1]){
                count=count+duration;
            }else{
                count=count+timeSeries[i+1]-timeSeries[i];
            }
        }
        
        
        return count+duration;
    }
};