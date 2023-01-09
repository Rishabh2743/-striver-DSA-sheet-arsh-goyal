class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
       sort(nums.begin() , nums.end()); 
      unordered_map<int , int>mp;
      int ans =0;int temp =0;
      for(int i=0;i<nums.size();i++){
         temp = sqrt(nums[i]);
         if(temp*temp==nums[i] && mp.find(temp)!=mp.end()){
             mp[nums[i]] = mp[temp] +1;
         }else{
             mp[nums[i]] = 1;
         } 
         ans = max(ans , mp[nums[i]]);
      }
      return ans<2?-1:ans;
    }
};
    