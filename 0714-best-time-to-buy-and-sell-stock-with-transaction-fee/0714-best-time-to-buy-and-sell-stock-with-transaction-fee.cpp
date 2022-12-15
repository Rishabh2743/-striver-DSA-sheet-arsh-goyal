class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int maxprofit=0;int mini=-prices[0];
        for(int i=1;i<prices.size();i++){
           maxprofit=max(maxprofit,mini+prices[i]-fee);
            mini=max(mini,maxprofit-prices[i]);
            
        }
        return maxprofit;
        
    }
};
