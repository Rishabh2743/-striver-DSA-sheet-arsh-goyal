class Solution {
public:
    static bool cmp (const pair<int,int> &a, const pair<int,int> &b){
        if(a.second == b.second) return (a.first < b.first);
        return (a.second < b.second);
    }

    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int,int>> vec;
        int n = scores.size();
        for(int i=0;i<n;i++){
            vec.push_back({scores[i],ages[i]});
        }
        sort(vec.begin(), vec.end(), cmp);
        vector<int> dp(n,0);
        
        int ans=1;

        //base case
        for(int i=0;i<n;i++){
            dp[i]=vec[i].first;
        }

        //transition
        for(int i=0; i<n; i++){
            for(int j=0;j<i;j++){
                if(vec[j].first<=vec[i].first){
                    dp[i] = max(dp[i], dp[j]+vec[i].first);
                }
            }
            ans = max(ans, dp[i]);
        }
        
        return ans;
    }
};