class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string str1="";
        string img1="";
        int i=0;
        while(num1[i]!='+'){
            str1=str1+num1[i];
            i++;
        }
        
        i++;
        while(num1[i]!='i'){
            img1=img1+num1[i];
            i++;
        }
        
        string str2="";
        string img2="";
        i=0;
        while(num2[i]!='+'){
            str2=str2+num2[i];
            i++;
        }
        
        i++;
        while(num2[i]!='i'){
            img2=img2+num2[i];
            i++;
        }
        int real1=stoi(str1);
        int real2=stoi(str2);
        int im1 = stoi(img1);
        int im2 = stoi(img2);
        
        int sum = (real1*real2)-(im1*im2);
        int sum1 = (real1*im2)+(real2*im1);
        
        string str = to_string(sum)+"+"+to_string(sum1)+"i";
        return str;
    }
};