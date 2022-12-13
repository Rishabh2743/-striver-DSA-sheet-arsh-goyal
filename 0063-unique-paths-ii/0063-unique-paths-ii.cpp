class Solution {
public:
     int solve(int m, int n, vector<vector<int>> &dp, vector<vector<int>>& obstacleGrid){
        if(n == 0 and m == 0){
            return 1;
        }

        if(n < 0 or m < 0){
            return 0;
        }
        if(obstacleGrid[m][n] == 1){
            return 0;
        }
        
        if(dp[m][n] != -1)return dp[m][n];
        
        int up = solve(m-1, n, dp, obstacleGrid);
        int left = solve(m, n-1, dp, obstacleGrid);
        return dp[m][n] = up + left;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        if(obstacleGrid[m-1][n-1] == 1 || obstacleGrid[0][0] == 1) return 0;
        
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return solve(m-1, n-1, dp, obstacleGrid);
    }
};