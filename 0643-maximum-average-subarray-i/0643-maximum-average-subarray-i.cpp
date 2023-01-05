class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double pro=0.0;
        for(int i=0;i<k;i++){
            pro+= nums[i];
        }
        double ans =pro/k;
        for(int i=k;i<nums.size();i++){
            pro-=nums[i-k];
            pro+=nums[i];
            double temp=pro/k;
            ans=max(temp,ans);
        }
        return ans;
        
    }
};
