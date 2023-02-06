class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, int cur)
	{
		if(cur==nums.size())
		{
			ans.push_back(nums);
			return;
		}
		for(int i=cur;i<nums.size();i++)
		{
			swap(nums[i],nums[cur]);
			solve(nums,ans,cur+1);
			swap(nums[i],nums[cur]);
		}
	}
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> ans;
		solve(nums,ans,0);
		return ans;
	}
};