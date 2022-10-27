class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        int j=nums.size();
        while(i<j-1){
            if(nums[i]>nums[i+1]){
                return i;
            }
            i++;
        }
        
        
        return j-1;
    }
};