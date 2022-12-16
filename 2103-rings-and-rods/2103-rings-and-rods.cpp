class Solution {
public:
    int countPoints(string rings) {
     map<char,set<char>>v;        
        for(int i=0;i<rings.size();i+=2)        
            v[rings[i+1]].insert(rings[i]);
        
        int ans=0;
        for(auto i:v)
        if(i.second.size()==3)ans++;
        return ans;
    }
};