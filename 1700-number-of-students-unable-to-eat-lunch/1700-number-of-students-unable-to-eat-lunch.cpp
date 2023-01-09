class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         int i=0,j=0;
        int c=0;
        while(students.size()!=0){
            if(c==students.size())break;
            if(students[i]==sandwiches[j]){
                j++;
                students.erase(students.begin()+i);c=0;
            }else{
            students.push_back(students[i]);
            students.erase(students.begin()+i);
            c++;}
        }
        return students.size();
    }
}; 
    
