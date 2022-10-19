class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;
            if(p[nums[i]]>1){
                return nums[i];
                break;
            }
            
        }
        
        return -1;
    }
};