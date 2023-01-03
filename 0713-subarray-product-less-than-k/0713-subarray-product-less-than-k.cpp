class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1){
            return 0;
        }
        int start = 0,end = 0, product = nums[0], count = 0;
        int n = nums.size();
        while(start < n && end < n){
            if(product < k){
                end++;
                if(end >= start){
                    count += (end-start);
                }
                if(end < n){
                    product *= nums[end];
                }
            }else{
                product /= nums[start];
                start++;
            }
        }
        return count;
    }
};