class Solution {
public:
    int findval(string s){
        int ind=0, val=0;
        for(auto &i: s){
            if(i<'0' || i>'9') return s.size();
            val=(val)*10 + (i-'0');
        }
        return val;
    }
    int maximumValue(vector<string>& strs) {
        int ans=-1;
        for(auto&i : strs)
            ans=max(ans, findval(i));
        return ans;
    }
};