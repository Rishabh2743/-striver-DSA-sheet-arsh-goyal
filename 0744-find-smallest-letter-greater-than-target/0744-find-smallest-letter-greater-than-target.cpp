class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(int i=0;i<letters.size();i++){
            if(target<letters[i]){
                return letters[i];
                break;
            }
        }
        return letters[0];
        
    }
};