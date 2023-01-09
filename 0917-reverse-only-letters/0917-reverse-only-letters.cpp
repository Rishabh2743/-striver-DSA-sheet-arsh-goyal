class Solution {
public:
    string reverseOnlyLetters(string s) {
         int a=0,b=s.size()-1;
        while(a<b)
        {
            if(!((s[a]>='a' && s[a]<='z') || (s[a]>='A' && s[a]<='Z')))
                a++;
            else if(!((s[b]>='a' && s[b]<='z') || (s[b]>='A' && s[b]<='Z')))
                b--;
            else
            {
                swap(s[a], s[b]);
                a++;
                b--;
            }
        }
        return s;
    }
};