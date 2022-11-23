class Solution {
public:
    vector<vector<int>>ans;
    void combo(int i,vector<int>v,vector<int>nums){
        if(i==nums.size()){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        combo(i+1,v,nums);
        v.pop_back();
        //combo(i+1,v,nums);
          while(i+1<nums.size()&&nums[i]==nums[i+1])
            i++;
        combo(i+1,v,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>v;
        combo(0,v,nums);
        return ans;
    }
};