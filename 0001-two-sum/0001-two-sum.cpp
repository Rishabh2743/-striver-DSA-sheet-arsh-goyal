class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
       unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            if(p.count(target-nums[i])){
                return {i,p[target-nums[i]]};
            }else{
                p[nums[i]]=i;
            }
        }
        
        return v;
        
    }
};