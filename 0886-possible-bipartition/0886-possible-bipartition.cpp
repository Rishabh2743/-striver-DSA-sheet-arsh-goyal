class Solution {
public:
     bool isBipartite(int node, int color, vector<vector<int>> &graph, vector<int> &vis) {
        vis[node] = color;
        for(auto it : graph[node]) {
            if(vis[it] == -1) {
                if(!isBipartite(it, 1 - color, graph, vis)) return 0;
            }
            else if(vis[it] == color) return 0;
        }
        return 1;
    }
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>> graph(n + 1);
        for(auto &edge : dislikes) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        vector<int> vis(n + 1, -1);
        bool isPossibleBipartite = 1;
        // checking for bipartite through every unvisited node as the given graph can be disconected
        for(int i = 1; i <= n; ++i) {
            if(vis[i] == -1) {
                // every disconnected component should be bipartite so that it can be divided into two
                isPossibleBipartite &= isBipartite(i, 0, graph, vis); 
            }
        }
        return isPossibleBipartite;
    }
};