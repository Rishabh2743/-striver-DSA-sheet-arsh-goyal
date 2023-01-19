class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       map<int,int>mp;
        int currsum=0;
        int ans=0;
        mp[0]++;
        for(auto x:nums){
            currsum+=x;
            int mod = (currsum%k +k)%k;

            if(mp.find(mod)!=mp.end()){
                ans+=mp[mod];
            }
            mp[mod]++;
        }
        return ans;
    }
};
    