class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        string temp = "";
        vector<string> st;
        map<char, string> m;
        map<string, int> ps;
        for(int i = 0; i< s.size(); i++)
        {
            if(s[i] == ' ')
            {
                st.push_back(temp);
                ps[temp]++;
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        ps[temp]++;
        st.push_back(temp);
        if(st.size() == pattern.size())
        {
            for(int i = 0; i<st.size(); i++)
            {
                if(m.count(pattern[i]))
                {
                    if(m[pattern[i]] != st[i])
                    {
                        return false;
                    }
                }
                else{
                    m[pattern[i]] = st[i];
                }
            }
            if(m.size() == ps.size())
            {
            return true;

            }
            return false;
        }
        else{
            return false;
        }
    }
};
    