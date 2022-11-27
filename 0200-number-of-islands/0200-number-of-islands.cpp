class Solution {
public:
    int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
    void dfs(vector<vector<char>>& grid, int r, int c, int maxr, int maxc){
        if(!(r < 0 || c < 0 || r >= maxr || c>= maxc || grid[r][c] == '0') ){
            grid[r][c] = '0';
            for(auto d: dir){
                dfs(grid, r+d[0], c+d[1], maxr, maxc);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int mr = grid.size();
        int mc = grid[0].size();
        int count = 0;
        for(int i = 0; i< mr; ++i){
            for(int j = 0; j< mc; ++j){
                if(grid[i][j] != '0'){
                    count++;
                    dfs(grid, i, j, mr, mc);
                }
            }
        }
        return count;
    }
                
};