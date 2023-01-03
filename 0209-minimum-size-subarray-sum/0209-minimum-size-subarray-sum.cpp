class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0, i=0, j=0, ans=nums.size();
         for(int i=0; i<nums.size(); i++){sum+=nums[i];}
        if(sum<target){return 0;}
        sum=0;
               while(j<nums.size() && j>=i){
            sum+=nums[j];
            if(sum<target){
                j++;
            }
            else{
                ans=min(ans, j-i+1);
                sum-=nums[i];
                sum-=nums[j];
                i++;
            }
        }
        return ans;
    }
};