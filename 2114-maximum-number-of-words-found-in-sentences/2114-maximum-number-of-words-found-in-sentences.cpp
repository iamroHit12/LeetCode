class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0,count=0;
        for(int i=0;i<sentences[0].size();i++){
            if(sentences[0][i]==32)
                max = max+1;
        }
        max=max+1;
        for(int i=1;i<sentences.size();i++){
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==32)
                    count+=1;
            }
            count = count+1;
            if(max<count){
                max=count;
            }
            count=0;
        }
        
        return max;
    }
};