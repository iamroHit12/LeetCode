WITHOUT RECURSION
​
void reverseString(vector<char>& s) {
int i=0;
int j = s.size()-1;
while(i<=j){
char ch = s[i];
s[i] = s[j];
s[j] = ch;
i++; j--;
}
}