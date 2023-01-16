class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
       int  t=a-b-(2*k);
        if(t>0)
        {
            return t;
        }
       return 0;

    }
};