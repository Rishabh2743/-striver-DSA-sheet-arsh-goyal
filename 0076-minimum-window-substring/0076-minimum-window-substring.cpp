class Solution {
    public:
    string minWindow(string s, string t) {
        int m[128] = {};
        for(auto x : t) m[x]++;
        int i = 0, j = 0, start = 0, len = INT_MAX, counter = t.size(), n = s.size(); 
     
        while(j < n){
            if(m[s[j]] > 0) counter--;
            m[s[j]]--;            
            while(counter == 0){
                if(len > j - i + 1){
                    len = j - i + 1;
                    start = i;
                }
                m[s[i]]++;
                if(m[s[i]] > 0) counter++;
                i++;
            }
            j++;
        }
        return len == INT_MAX ? "" : s.substr(start, len);
    }
};