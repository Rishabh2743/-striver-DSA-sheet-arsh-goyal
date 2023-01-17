class Solution {
public:
    int minFlipsMonoIncr(string s) {
      int first1 = -1;
        int last0 = -1;
        int numChng = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' &&first1== -1){
                first1 =  i;
            }
            if(s[i]=='0'){
                last0 = i;
            }
            if(first1!=-1 && s[i]=='0'){
                numChng++;
            }
        }
        if(first1==-1 || last0==-1 || first1>last0){
            return 0;
        }
        int ans = numChng;
        for(int i=first1;i<=last0;i++){
            if(s[i]=='1'){
                numChng++;
            }
            else{
                numChng--;
            }
            ans = min(ans,numChng);
        }
        return ans;
    }
};
