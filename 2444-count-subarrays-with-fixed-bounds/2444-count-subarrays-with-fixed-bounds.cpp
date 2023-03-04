class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
     int minKIndex=-1;
        int maxKIndex=-1;
        int culIndex=-1;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK) culIndex=i;
            if(nums[i]==minK)minKIndex=i;
            if(nums[i]==maxK)maxKIndex=i;
            long long smaller=min(minKIndex,maxKIndex);
            long long temp=(smaller-culIndex)>=0?smaller-culIndex:0;
            ans+=temp;
        }
        return ans;
    }
};
    