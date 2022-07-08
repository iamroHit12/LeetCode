class Solution {
public:
    void reverse(vector<int> &v){
        int i=0;
        int j=v.size()-1;
        
        while(i<j){
            int temp=v[i];
            v[i]=v[j];
            v[j] = temp;
            
            i++;j--;
        }
    }
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image){
        vector<vector<int>> res;
        vector<int> v;
        for(int i=0;i<image.size();i++){
            v.clear();
            for(int j=0;j<image[i].size();j++){
                v.push_back(image[i][j]);
            }
            
            reverse(v);
            res.push_back(v);
        }
        
        for(int i=0;i<res.size();i++){
            for(int j=0;j<res[i].size();j++){
                if(res[i][j]==0)
                    res[i][j]=1;
                else
                    res[i][j]=0;
            }
        }

        return res;
    }
};