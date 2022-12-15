class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size()+1, vector<vector<int>>(2,vector<int>(3,0)));
       for(int i=prices.size()-1;i>=0;i--){
           for(int buy=0;buy<=1;buy++){
               for(int tran=1;tran<=2;tran++){
                   if(buy==1){
                       dp[i][buy][tran] = max(-prices[i]+dp[i+1][0][tran] , dp[i+1][1][tran]);
                   }else{
                       dp[i][buy][tran] = max(prices[i]+dp[i+1][1][tran-1] , dp[i+1][0][tran]);
                   }
               }
           }
       } 
        return dp[0][1][2];
    }
};