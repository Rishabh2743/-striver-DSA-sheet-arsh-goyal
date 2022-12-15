class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,int> p1,p2;
    
    for(int i=0; i<s.size(); i++){
        p1[s[i]]=i+1;
        p2[t[i]]=i+1;
    }
    
    for(int i=0; i<s.size(); i++){
        if(p1[s[i]]!= p2[t[i]]) 
            return false;
    }
    
    return true;
}
};