class Solution {
public:
    
    void solve(vector<int>& nums,vector<int>&a,int i,vector<vector<int>>&ans){
        if(i==nums.size()){
            ans.push_back(a);
            return;
        }
        a.push_back(nums[i]);
        solve(nums,a,i+1,ans);
        a.pop_back();
        solve(nums,a,i+1,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>a;
        vector<vector<int>>ans;
        solve(nums,a,0,ans);
        return ans;
    }
};