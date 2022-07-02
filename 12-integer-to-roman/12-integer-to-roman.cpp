class Solution {
public:
    string intToRoman(int num) {
        string str;
        while(num>0){
            if(num>=1000){
                num=num-1000;
                str+="M";
            }else if(num>=900){
                num=num-900;
                str+="CM";
            }else if(num>=500){
                num=num-500;
                str+="D";
            }else if(num>=400){
                num=num-400;
                str+="CD";
            }else if(num>=100){
                num=num-100;
                str+="C";
            }else if(num>=90){
                num=num-90;
                str+="XC";
            }else if(num>=50){
                num=num-50;
                str+="L";
            }else if(num>=40){
                num=num-40;
                str+="XL";
            }else if(num>=10){
                num=num-10;
                str+="X";
            }else if(num>=9){
                num=num-9;
                str+="IX";
            }else if(num>=5){
                num=num-5;
                str+="V";
            }else if(num>=4){
                num=num-4;
                str+="IV";
            }else if(num>=1){
                num=num-1;
                str+="I";
            }
        }
        
        return str;
    }
};