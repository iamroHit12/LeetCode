class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size()-1;
        
        int max_area = 0;
        
        while(low<high){
            int area = (height[low]<height[high]?height[low]:height[high])*(high-low);
            
            if(area>max_area)
                max_area = area;
            
            if(height[low]<height[high])
                low++;
            else
                high--;
        }
        
        return max_area;
    }
};