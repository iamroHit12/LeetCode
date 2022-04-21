class Solution {
public:
    string interpret(string command) {
        string s="";
        int i=0;
        while(i<command.size()){
            if(command[i]=='G'){
                s=s+"G";
                i++;
            }else if(command[i]=='(' && command[i+1]==')'){
                s=s+"o";
                i=i+2;
            }else if(command[i]=='(' && command[i+1]=='a'){
                s=s+"al";
                i=i+4;
            }
        }
        
        return s;
    }
};