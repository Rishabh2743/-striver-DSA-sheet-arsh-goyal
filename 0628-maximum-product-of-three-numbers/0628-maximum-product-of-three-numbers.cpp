class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
       sort(nums.begin(),nums.end());
        int i=0;
        int x= nums[n-1] * nums[n-2] * nums[n-3];
        int y= nums[i] * nums[i+1] * nums[n-1];
        return max(x,y);
    }
};