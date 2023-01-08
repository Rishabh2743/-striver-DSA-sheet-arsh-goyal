class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
         unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            p[nums[i]]++;
        }
        int ans=0; int sum=0;
        if(p.size()<3)
        return 0;
    
    for(auto it:p)
        sum = sum+it.second;
     int temp=0;
    
    for(auto it:p)
    {
        int t = it.second;
        sum-=t;
        
        ans = ans + temp*t*sum;
        temp = temp+t;
    }
    
    return ans;

        
        
    }
};