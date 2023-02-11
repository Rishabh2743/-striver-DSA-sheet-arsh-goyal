class Solution {
public:
    void solve(vector<int>& nums,int& ans,int& xorAns,int i)
{
    if(i==nums.size())
    {
        ans=ans + xorAns;
        return;
    }

    // include
    xorAns=xorAns^nums[i];
    solve(nums,ans,xorAns,i+1);
    // backtrack
     xorAns=xorAns^nums[i];
    // exclude
    solve(nums,ans,xorAns,i+1);
}


    int subsetXORSum(vector<int>& nums) {
        int ans=0;
        int xorAns=0;
        int i=0;
        solve(nums,ans,xorAns,i);
        return ans;
    }
};