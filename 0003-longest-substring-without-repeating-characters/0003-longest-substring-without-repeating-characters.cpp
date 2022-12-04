class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {  unordered_map<char, int> h ;
        int ans = 0, i = 0, j = 0  ;
        while(j < s.length()    ) {
            
            h[s[j]]++   ;
            while(h[s[j]]>1) h[s[i++]]-- ;
            ans = max(ans, (((j++)-i)+1)) ;
        }
        return ans ;

        
    }
};