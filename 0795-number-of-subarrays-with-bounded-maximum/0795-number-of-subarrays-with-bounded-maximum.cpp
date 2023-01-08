class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int n = nums.size();
        int ans = 0;
        int l = 0;
        int r = 0;
        int window = 0;
        while(r < n){
            if(nums[r] >= left && nums[r] <= right){
                window = r - l + 1;
            }
            else if(nums[r] > right){
                window = 0;
                l = r + 1;
            }
            
            ans += window; 
            r += 1;
        }
        return ans;
    }
};
   