class Solution {
public:
    vector<string> generateParenthesis(int n) {
         vector <string> res;
        string temp;
        function <void(int, int)> bt = [&](int l, int r) {
            if (l == n && r == n) res.push_back(temp);
            else {
                if (l < n) {
                    temp.push_back('(');
                    bt(l + 1, r);
                    temp.pop_back();
                }
                if (l > r) {
                    temp.push_back(')');
                    bt(l, r + 1);
                    temp.pop_back();
                }
            }
        };
        
        bt(0, 0);
        return res;
    }
};
        
    