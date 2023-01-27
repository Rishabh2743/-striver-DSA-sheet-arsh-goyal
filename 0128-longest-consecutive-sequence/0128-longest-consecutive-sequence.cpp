class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      if(nums.size()==0)  return 0;
        //sort
        sort(nums.begin(),nums.end());
        int count=1 , ans=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1 == nums[i] and nums[i-1]!=nums[i]){
                count++;
                ans=max(ans,count);
            }
            else if(nums[i-1]==nums[i])
                continue;
            else
                count=1;
        }
        return ans;
    }
};