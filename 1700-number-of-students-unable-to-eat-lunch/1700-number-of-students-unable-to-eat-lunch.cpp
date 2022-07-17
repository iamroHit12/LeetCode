class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int i=0;
        int n=sandwiches.size();
        
        while(i<n){
            if(sandwiches[i]==students[0]){
                students.erase(students.begin());
                i++;
            }else{
                auto it = find(students.begin(),students.end(),sandwiches[i]);
                
                if(it!=students.end()){
                    int val = students[0];
                    students.erase(students.begin());
                    students.push_back(val);
                }else{
                    break;
                }
            }
        }
        
        return students.size();
    }
};