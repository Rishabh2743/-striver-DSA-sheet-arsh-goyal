class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
         priority_queue<int> q;
        for(int i=0;i<nums.size();i++) q.push(nums[i]);
        int i=0;
        while(!q.empty()){
            nums[i++]=q.top();
            q.pop();
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};
        
  