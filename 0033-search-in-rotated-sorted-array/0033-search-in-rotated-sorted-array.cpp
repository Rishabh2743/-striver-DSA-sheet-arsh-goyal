class Solution {
public:
    int search(vector<int>& nums, int target) {
        int t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                t=i+1;
            }
        }
        if(t>0){
            return t-1;
        }
        else{
            return -1;
        }
    }
};