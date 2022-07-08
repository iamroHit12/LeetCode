class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int,int> m;
        vector<int> v;
        vector<int> res;
        int count = 0;
        for(int i=0;i<mat.size();i++){
            count = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1)
                    count++;
            }
            v.push_back(count);
        }
        
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        
        vector<int> v2(v);
        sort(v2.begin(),v2.end());
        for(int i=0;i<k;i++){
            auto it = find(v.begin(),v.end(),v2[i]);
            
            int index = it-v.begin();
            res.push_back(index);
            v[index] = INT_MAX;
        }
        
        return res;
    }
    
};