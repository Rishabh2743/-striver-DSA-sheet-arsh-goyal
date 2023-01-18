class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int overAllMax;
       int overAllMin;
       int totalSum=0;
       int sumMin;
       int sumMax;
       overAllMax=overAllMin=sumMin=sumMax=totalSum=nums[0];
       for(int i=1;i<nums.size();i++)
       {
           totalSum=totalSum+nums[i];
           sumMax=max(nums[i],sumMax+nums[i]);
           if(sumMax>overAllMax)
           overAllMax=sumMax;

           sumMin=min(nums[i],sumMin+nums[i]);
            if(sumMin<overAllMin)
           overAllMin=sumMin;
       }
       if(totalSum!=overAllMin)
       return max(overAllMax,totalSum-overAllMin);
       else
       return overAllMax;
    }
};
    