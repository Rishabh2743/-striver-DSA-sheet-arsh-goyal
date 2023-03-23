class Solution {
public:
    void dfs(int i,vector<int>adj[],vector<int>&vis)
    {
        vis[i]=1;
        for (auto k:adj[i])
        {
            if (!vis[k])dfs(k,adj,vis);
        }
    }
    int makeConnected(int n, vector<vector<int>>& conn) {
        if (conn.size()<n-1)return -1;
        vector<int>adj[n];
        for (auto i:conn)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(n);
        int count=0;
        for (int i=0;i<n;i++)
        {
            if (!vis[i])
            {
                dfs(i,adj,vis);
                count++;
            }
        }
        return count-1;
    }
};