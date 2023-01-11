
  class Solution {
    int dfs(vector<vector<int>>& graph, vector<bool>& hasApple, int last, int index) {
        int res = 0;
        for (auto it : graph[index]) {
            if (it != last) {
                int x = dfs(graph, hasApple, index, it);
                if (x > 0 || hasApple[it]) {
                    res += (x + 2);
                }
            }
        }
        return res;
    }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> graph(n);
        for (auto& x : edges) {
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        int res=dfs(graph, hasApple, -1, 0);
        return res;
    }
};