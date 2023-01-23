class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>gainTrust(n+1, 0);
        for(int i=0; i<trust.size(); i++){
            if(gainTrust[trust[i][1]] != -1)  gainTrust[trust[i][1]]++;
            gainTrust[trust[i][0]] = -1;
        }

        int ans = -1;
        for(int i=1; i<=n; i++){
            if(gainTrust[i] == n-1){
                if(ans != -1) return -1;
                ans = i;
            }
        }
        return ans;
    }
};
