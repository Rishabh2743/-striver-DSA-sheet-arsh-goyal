class Solution
{

    int dp[30][30][30][30];

    int solve(string &s1, string &s2, int i, int j, int k, int l)
    {
        if (i == j && k == l)
        {
            if (s1[i] == s2[k])
                return 1;
            return 2;
        }

        if (dp[i][j][k][l])
            return dp[i][j][k][l];

        int ans = 2;
        for (int x = i; x < j; x++)
        {

            if (solve(s1, s2, i, x, k, k + (x - i)) == 1 && solve(s1, s2, x + 1, j, k + (x - i) + 1, l) == 1)
            {
                ans = 1;
                break;
            }
            if (solve(s1, s2, x + 1, j, k, k + (j - x - 1)) == 1 && solve(s1, s2, i, x, k + (j - x), l) == 1)
            {
                ans = 1;
                break;
            }
        }

        return dp[i][j][k][l] = ans;
    }

public:
    bool isScramble(string s1, string s2)
    {
        memset(dp, 0, sizeof(dp));
        return solve(s1, s2, 0, s1.size()-1, 0, s2.size()-1) == 1;
    }
};