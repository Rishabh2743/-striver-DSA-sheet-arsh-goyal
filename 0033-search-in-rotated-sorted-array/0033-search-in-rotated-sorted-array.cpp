class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while (l <= r) {
            if(nums[l]==target) return l;
            if(nums[r]==target) return r;
            int mid = (l+r) / 2;
            if (target == nums[mid]) return mid;
            if(nums[mid]>nums[r] && (target<=nums[r] || (target>=nums[mid]))) l=mid+1;
            else if(nums[mid]<nums[r] && (( target>=nums[mid] && target<=nums[r]))) l=mid+1;
            else r=mid-1;
        }
        return -1; 
    }
};