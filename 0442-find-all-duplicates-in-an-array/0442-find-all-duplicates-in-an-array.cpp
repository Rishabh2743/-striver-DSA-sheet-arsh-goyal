class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
       unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;
            if(p[nums[i]]>1){
                v.push_back(nums[i]);
                p[nums[i]]=0;
            }
        }
        
        return v;
    }
};