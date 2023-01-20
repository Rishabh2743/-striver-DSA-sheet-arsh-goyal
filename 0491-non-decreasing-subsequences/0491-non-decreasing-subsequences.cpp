class Solution {
public:
    void solve(int idx, set<vector<int>> &st, vector<int> &temp, vector<int> &nums){
        if(idx == nums.size()) {
            if(temp.size() > 1)
                st.insert(temp);
            return;
        }
        if(temp.size() == 0 || temp.back() <= nums[idx]){
            temp.push_back(nums[idx]);
            solve(idx+1, st, temp, nums);
            temp.pop_back();
        } 
        solve(idx+1, st, temp, nums);
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> temp;
        solve(0,st,temp,nums);
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};