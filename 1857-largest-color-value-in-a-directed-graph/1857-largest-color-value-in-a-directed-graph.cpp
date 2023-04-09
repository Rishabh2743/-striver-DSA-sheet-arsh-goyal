class Solution {
public:
    int largestPathValue(string s, vector<vector<int>>& e) {
        int n=s.size();
        vector<int>ad[n];
         vector<int>ind(n,0);
        for(auto i:e){
            ad[i[0]].push_back(i[1]);
            ind[i[1]]++;
        }
        vector<int>col(n);
        for(int i=0;i<s.size();i++)col[i]=s[i]-'a';
        queue<int>q;
        int ans=0;
        int mx=1;
        vector<vector<int>>dp(n,vector<int>(26,0));
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(ind[i]==0){
                vis[i]=1;
                q.push(i);
                dp[i][col[i]]++;
            }
            
        }
        while(q.size()){
            int x=q.front();
            q.pop();
            ans++;
            for(auto i:ad[x]){
                if(!vis[i]){
                    for(int j=0;j<26;j++){
                        dp[i][j]=max(dp[i][j],dp[x][j] + (j==col[i]));
                        mx=max(mx,dp[i][j]);
                    }
                }
                ind[i]--;
                if(ind[i]==0)q.push(i);
            }
        }
      if(ans!=n)return -1;
      else return mx;
    }
};