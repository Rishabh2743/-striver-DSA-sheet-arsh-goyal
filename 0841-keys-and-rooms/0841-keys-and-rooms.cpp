class Solution {
public:
 void dfs(vector<vector<int>>& rooms, vector<bool> &vis, int &count, int idx){
        if(vis[idx])
            return;

        vis[idx] = 1;
        ++count;

        for(int nextroom : rooms[idx]){
            dfs(rooms, vis, count, nextroom);
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n, 0);
        int count = 0;
        dfs(rooms, vis, count, 0);

        return count == n;
    }
};