class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int ind;
        vector<string> res;
        string str="";
        for(int i=0;i<emails.size();i++){
            auto it = find(emails[i].begin(),emails[i].end(),'@');
            ind = it-emails[i].begin();
            str="";
            for(int j=0;j<emails[i].size();j++){
                if(emails[i][j]=='+' && j>ind)
                    str+=emails[i][j];
                else if(emails[i][j]=='+')
                    j=ind-1;
                else if(emails[i][j]=='.'&&j>ind)
                    str+=emails[i][j];
                else if(emails[i][j]!='.')
                    str+=(emails[i][j]);
            }
            
            res.push_back(str);
        }
        
        set<string> s(res.begin(),res.end());
        return s.size();
    }
};