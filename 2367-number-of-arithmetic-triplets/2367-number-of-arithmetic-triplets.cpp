class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(p.find(nums[i]+diff) !=p.end() && p.find(nums[i]+diff+diff) !=p.end()){
                ans++;
            }
        }
        
        return ans;
    }
};