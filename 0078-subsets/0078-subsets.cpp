class Solution {
public:
  vector<vector<int>> ans;
void solve(vector<int>& nums,vector<int>& a,int i){
    if(i==nums.size()){
        ans.push_back(a);
        return;
    }
    a.push_back(nums[i]);
    solve(nums,a,i+1);
    a.pop_back();
    solve(nums,a,i+1);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> a;
    solve(nums,a,0);
    return ans;
}
};