class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      unordered_map<char, int> mpp;
        for(int i=0; i<s1.size(); i++){
            mpp[s1[i]]++;
        }
        int count = mpp.size();
        int i = 0;
        int j = 0;
        while(j < s2.size()){
            if(mpp.find(s2[j]) != mpp.end()){
                mpp[s2[j]]--;
                if(mpp[s2[j]] == 0){
                    count--;
                }
                
            }
            if(j-i+1 < s1.size()){
                j++;
            }
            else if(j-i+1 == s1.size()){
                if(count == 0){
                    return true;
                }
                if(mpp.find(s2[i]) != mpp.end()){
                mpp[s2[i]]++;
                if(mpp[s2[i]] == 1){
                    count++;
                }
            }
                i++;
                j++;
            }
        }
         return false;   
    }
};