class Solution {
public:
    int dp[501][501];

    int solve(string s1,string s2,int i1,int i2)
    {
        if(i1==0)
            return i2;
        if(i2==0)
            return i1;

        if(dp[i1][i2]!=-1)
            return dp[i1][i2];

        if(s1[i1-1]==s2[i2-1])
            return dp[i1][i2]=solve(s1,s2,i1-1,i2-1);

        int i=1+solve(s1,s2,i1,i2-1);
        int d=1+solve(s1,s2,i1-1,i2);
        int r=1+solve(s1,s2,i1-1,i2-1);

        return dp[i1][i2]=min(i,min(d,r));
    }

    int minDistance(string word1, string word2) {
        int m=word1.length(),n=word2.length();
        memset(dp,-1,sizeof(dp));
        return solve(word1,word2,m,n);
    }
};