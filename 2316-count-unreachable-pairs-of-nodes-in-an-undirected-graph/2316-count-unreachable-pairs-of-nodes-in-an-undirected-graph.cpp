class Solution {
public:
     void dfs(vector<vector<int>>&adj,vector<bool>&vis,int src,int &count){
        vis[src]=true;
        count++;
        for(auto to :adj[src]){
          if(!vis[to]){
              dfs(adj,vis,to,count);
          }
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool>vis(n,false);
        long long sum=0;
        long long ans=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count=0;
                dfs(adj,vis,i,count);
                ans+=sum*count;
                sum+=count;
            }
        }
        return ans;
    }
};
