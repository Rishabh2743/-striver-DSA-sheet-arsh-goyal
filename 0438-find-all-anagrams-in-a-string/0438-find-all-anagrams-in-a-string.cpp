class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();

        if(n<m)
        {
            return {};
        }

        vector<int>window(26,0);
        vector<int>pat(26,0);
        vector<int>ans;

        for(int i = 0; i<m; i++)
        {
            window[s[i]-'a']++;
            pat[p[i] - 'a']++;
        }

        if(pat == window)
        {
            ans.push_back(0);
        }

        for(int i = m; i<n; i++)
        {
            window[s[i-m] - 'a']--;
            window[s[i] - 'a']++;

            if(window == pat)
            {
                ans.push_back(i-m+1);
            }
        }

        return ans;
    }
};

            