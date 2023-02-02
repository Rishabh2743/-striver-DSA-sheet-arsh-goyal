class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
       unordered_map<char , int> mp;
        int index=0;
        for(auto c : order) {
            mp[c]=++index;
        }
        int n=words.size();
        for(int i=0;i<n-1;i++) {
            auto w1 = words[i];
            auto w2 = words[i+1];
            bool flag=true;
            for(int j=0;j<min(w1.length() , w2.length());j++){
                if(mp[w1[j]] < mp[w2[j]]) {
                    flag=false;
                    break;
                }else if(mp[w1[j]] > mp[w2[j]]) {
                    return false;
                }
            }
            if(flag and w1.length() > w2.length()){
                return false;
            }
        }
        return true;
    }
};