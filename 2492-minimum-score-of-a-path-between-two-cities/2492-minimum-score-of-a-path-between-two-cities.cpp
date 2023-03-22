class Solution {
public:
   int minn = INT_MAX;
    void dfs(int node , vector<bool>&vis , vector<vector<pair<int,int>>>&adj){
        if(vis[node]) return;
        vis[node] = true;
        for(auto it:adj[node]){
            minn = min(minn , it.second);
            dfs(it.first , vis , adj);
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n+1);

        for(int i=0 ; i<roads.size() ; i++){
            adj[roads[i][0]].push_back({roads[i][1] , roads[i][2]});
            adj[roads[i][1]].push_back({roads[i][0] , roads[i][2]});
        }

        vector<bool> vis(n+1 , false);
        dfs(1 , vis , adj);

        return minn;
        
    }
};