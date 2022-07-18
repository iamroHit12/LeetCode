class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#')
                st.push(s[i]);
            else if(st.empty() && s[i]=='#')
                continue;
            else if(s[i]=='#')
                st.pop();
        }
        
        stack<char> st1;
        for(int i=0;i<t.size();i++){
            if(t[i]!='#')
                st1.push(t[i]);
            else if(st1.empty() && t[i]=='#')
                continue;
            else if(t[i]=='#')
                st1.pop();
        }
        
        string str1="";
        string str2="";
        while(!st.empty()){
            str1+=st.top();
            st.pop();
        }
        
        while(!st1.empty()){
            cout<<st1.top()<<" ";
            str2+=st1.top();
            st1.pop();
        }
        
        if(str1!=str2)
            return false;
        
        return true;
    }
};