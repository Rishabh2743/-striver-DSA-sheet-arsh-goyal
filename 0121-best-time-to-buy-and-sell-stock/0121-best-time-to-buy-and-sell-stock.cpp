class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit =0; int minpoint =prices[0];
        for(int i=0;i<prices.size();i++){
             minpoint=min(minpoint,prices[i]);
             maxProfit=max(maxProfit,(prices[i]-minpoint));
            
        }
        return maxProfit;
    }
};