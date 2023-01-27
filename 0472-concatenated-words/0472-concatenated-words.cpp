class Solution {
public:
    bool Help(int i, string &str, unordered_map<string,bool> &mp){
        if(i==str.size()) return true;

        int ans = false;
        string s = "";

        for(int k=i;k<str.size();k++){
            s = s + str[k];

            if(mp.find(s) != mp.end() && s != str){
                ans = ans || Help(k+1,str,mp);
            }
        }

        return ans;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words){
        vector<string> Ans;
        unordered_map<string,bool> mp;

        for(string word : words) mp[word] = true;

        for(string word : words){
            if(Help(0, word, mp)) Ans.push_back(word);
        }

        return Ans;
    }
};