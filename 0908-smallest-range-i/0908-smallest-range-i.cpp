class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());
        int ans=a-b;
        while(k!=0){
            a-=1;
            ans=min(ans,abs(a-b));
            b+=1;
            ans=min(ans,abs(a-b));
            k--;
        }
        return ans;
    }
};