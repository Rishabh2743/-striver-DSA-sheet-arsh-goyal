class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;

        }
        for(int i=0;i<nums.size();i++){
            if(p.find(nums[i])!=p.end() && p[nums[i]]<=1){
                return nums[i];
                break;

            }
        }
        return 0;
    }
};