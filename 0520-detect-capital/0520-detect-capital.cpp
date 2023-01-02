class Solution {
public:
   
    bool detectCapitalUse(string word) {
        int N = word.length();
        int count = 0;
        if(N == 1){
            return true;
        }
        for(int i = 0; i<N; i++){
            if(word[i]>=65 && word[i]<=90)  count++; 
        }
        if(count==1 && (word[0]>=65 && word[0]<=90))    return true;
        if(count==0 || count==N)    return true;
        else    return false;
    }
};