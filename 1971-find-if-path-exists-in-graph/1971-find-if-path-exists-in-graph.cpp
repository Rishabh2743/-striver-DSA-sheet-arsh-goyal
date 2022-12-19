class Solution {
public:
  bool dfs(unordered_map<int,vector<int>> &adj,int i,int d,vector<int>& vis){
    if(i == d)return true;
    
    if(vis[i] == 1)return false;
    
    vis[i] = 1;
    
    for(auto it: adj[i]){
        if(dfs(adj,it,d,vis))return true;
    }
    
    return false;
}
bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
    unordered_map<int,vector<int>>adj;
    
    for(int i = 0; i < edges.size(); i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    
    vector<int> vis(n,0);
    
    return dfs(adj,s,d,vis);
}
};