class Solution {
public:
     int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        if (node1 == node2) return node1;
        vector<int> walked(edges.size(), INT_MIN);
        walked[node1] = 0;
        dfs(edges, walked, node1);
        vector<int> walked2(edges.size(), INT_MIN);
        walked2[node2] = 0;
        dfs(edges, walked2, node2);
        pair<int, int> ans({-1, INT_MAX});
        for (int i = 0; i < walked.size(); ++i){
            if (walked[i] != INT_MIN && walked2[i] != INT_MIN) if (max(walked[i], walked2[i]) < ans.second) ans = {i, max(walked[i], walked2[i])};
        }
        return ans.first;
    }

    void dfs(vector<int> &edges, vector<int>&walked, int currentNode){
        if (edges[currentNode] == -1 || walked[edges[currentNode]] != INT_MIN) return;
        walked[edges[currentNode]] = walked[currentNode] + 1;
        dfs(edges, walked, edges[currentNode]);
    }

};