class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int>p;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        while(!p.empty()){
            k--;
            if(k==0){
                return p.top();
            }
            p.pop();
        }
        return -1;
    }
};
