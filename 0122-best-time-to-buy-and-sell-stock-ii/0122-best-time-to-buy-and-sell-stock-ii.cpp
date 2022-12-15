class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];int maxprofit=0;
        for(int i=0;i<prices.size();i++){
            if(mini>prices[i]){
                mini=prices[i];
            }else{
                maxprofit+=prices[i]-mini;
                mini=prices[i];
            }
        }
        return maxprofit;
    }
};