class Solution {
public:
   bool solve(vector<int> &nums,int idx,int sum,vector<vector<int>> &dp){
        if(idx>=nums.size()||sum<0){
            return false;
        }
        if(dp[idx][sum]!=-1){
            return dp[idx][sum];
        }
        if(sum==0){
            return true;
        }
        return dp[idx][sum]=solve(nums,idx+1,sum-nums[idx],dp)||solve(nums,idx+1,sum,dp);
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2){
            return false;
        }
        sum/=2;
        vector<vector<int>> dp(n+1,vector<int>(sum+1,-1));
        return solve(nums,0,sum,dp);
    }
};