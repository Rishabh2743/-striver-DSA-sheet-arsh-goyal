class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int res = 1;
        if(nums.size()==0)
            return 0 ; 
        unordered_set<int> s ; 
        for(int i = 0; i< nums.size();i++)
            s.insert(nums[i]);
        
        int count = 0 ; 
        for(int i = 0;i<nums.size();i++ ){
            count = 1 ; 
            if(s.find(nums[i]-1)==s.end()){
                
            
            int x = nums[i];
            while(s.find(x+1)!=s.end()){
                count++ ; 
                x++; 
            }
            res = max(res,count);
            }
        }
            
        return res ;
    }
};