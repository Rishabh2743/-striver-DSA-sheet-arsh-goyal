class Solution {
public:
    int maxProfit(vector<int>& prices) {
    vector<vector<int>> dp(prices.size()+2,vector<int>(2,0));
    
    for(int ind = prices.size()-1; ind>=0; ind--){
        for(int buy=0; buy<=1; buy++){
            int profit;
            if(buy==0){
                profit = max(0+dp[ind+1][0], -prices[ind] + dp[ind+1][1]);
            }
    
            if(buy==1){
                profit = max(0+dp[ind+1][1], prices[ind] + dp[ind+2][0]);
            }
            
            dp[ind][buy] = profit;
        }
    }
    
    return dp[0][0];
}
};