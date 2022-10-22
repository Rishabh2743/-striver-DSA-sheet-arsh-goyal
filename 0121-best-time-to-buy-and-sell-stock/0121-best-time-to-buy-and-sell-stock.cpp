class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mi=prices[0],maxprofit=0;
   for(int i=0;i<prices.size();i++)
      {
       mi=min(mi,prices[i]);
        maxprofit=max(maxprofit,(prices[i]-mi));
        } 
return maxprofit;
    }
};