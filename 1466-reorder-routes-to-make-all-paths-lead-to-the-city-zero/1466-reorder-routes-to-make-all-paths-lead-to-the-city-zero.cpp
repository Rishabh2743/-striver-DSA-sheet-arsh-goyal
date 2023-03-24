class Solution {
public:
    int ans=0;
    void dfs(int node,vector<pair<int,int>>v[],vector<int>&vis){
        vis[node]=1;
        for(auto [neig,sign]:v[node]){
            if(!vis[neig]){
                vis[neig]=1;
                ans+=sign;
                dfs(neig,v,vis);
            }
        }
        
    }
    int minReorder(int n, vector<vector<int>>& c) {
        vector<pair<int,int>>v[n];
        for(auto it:c){
            v[it[0]].push_back({it[1],1});
            v[it[1]].push_back({it[0],0});

        }
        vector<int>vis(n,0);
        dfs(0,v,vis);
        return ans;
        
    }
};