class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(p[nums[i]]==1){
                return nums[i];
                break;
            }
        }
        return -1;
        
    }
};