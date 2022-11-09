class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length())
            return false;
        unordered_map<char,int>p;
        for(int i=0;i<s.length();i++){
            p[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            if(p.find(t[i])!=p.end() && p[t[i]]>0){
                p[t[i]]--; 
            }else{
                return false;
            }
        }
        
        return true;
    }
};