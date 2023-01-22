class Solution {
public:
   string longestPalindrome(string s) {
        
        int best_len = 0;
        int n=s.length();
        string best_str = "";
        
        for(int mid=0;mid<n;mid++)
        {
            for(int k=0;mid-k>=0 && mid+k<n;k++)
            {
                if( s[mid+k]!=s[mid-k])
                {
                    break;
                }
                int len = 2*k+1;
                if(best_len<len)
                {
                    best_len = len;
                    best_str=s.substr(mid-k,len);
                }
            } 
        }
        
        for(int mid=0;mid<n;mid++)
        {
            for(int k=0;mid-k>=0 && mid+k+1<n;k++)
            {
                if(s[mid-k]!=s[mid+k+1])
                {
                    break;
                }
                int len = 2*(k+1);
                if(best_len<len)
                {
                    best_len = len;
                    best_str=s.substr(mid-k,len);
                }
            }
        }
        return best_str;
        
    }
};