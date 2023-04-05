class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
         int n = nums.size();
        long long sum = nums[0];
        long long min = nums[0];
        for(int i=1;i<n;i++){
            sum += nums[i];
            if(nums[i]>min){
                int x = sum/(i+1);
                if(x>=min){
                    if(sum%(i+1))
                        min = x+1;
                    else
                        min = x;
                }
            }
        }
        return min;
    }
};