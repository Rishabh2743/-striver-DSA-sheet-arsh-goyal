class Solution {
public:
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<3){
            return 0;
        }
        int i=0;
        while(i<s.size()-2){
            if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2]){
                count++;
            }
            i++;
        }
        return count;
    }
};