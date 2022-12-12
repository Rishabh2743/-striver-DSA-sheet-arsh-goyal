class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        
        int dp[n];
        if(n>=1){
            dp[0]=nums[0];
        }
        if(n>=2){
            dp[1]=max(nums[0],nums[1]);
        }
        for(int i=2;i<nums.size();i++){
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        }
        
        return dp[n-1];
    }
};