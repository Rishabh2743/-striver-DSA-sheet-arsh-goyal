class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
       vector<vector<int>> dp(coins.size(),vector<int>(amount+1,0));
    
    //Base Condition
    
    for(int i=0; i<=amount; i++){
        if(i%coins[0] == 0)  
            dp[0][i] = i/coins[0];
        else dp[0][i] = 1e9;
    }
    
     for(int ind = 1; ind<n; ind++){
        for(int target = 0; target<=amount; target++){
            
            int notTake = 0 + dp[ind-1][target];
            int take = 1e9;
            if(coins[ind]<=target)
                take = 1 + dp[ind][target - coins[ind]];
                
             dp[ind][target] = min(notTake, take);
        }
    }
    
    int ans = dp[n-1][amount];
    if(ans >=1e9) return -1;
    return ans;

 
    }
};