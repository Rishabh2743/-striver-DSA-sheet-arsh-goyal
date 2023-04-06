class Solution {
public:
    void dfs(int row, int col, int n, int m ,vector<vector<int>>& grid){
    grid[row][col] = 1;
    
    int drow[4] = {1, -1, 0, 0};
    int dcol[4] = {0, 0, 1, -1};
    
    for(int k =0; k<4; k++){
        int nrow = row + drow[k];
        int ncol = col + dcol[k];
        
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol] == 0){
            dfs(nrow, ncol, n, m, grid);
        }
    }
}

int closedIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    
   //calling DFS for boundary 0's (and mark them as 1 as they are of no use)
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i*j == 0 || i == n-1 || j==m-1){
                // cout<<i<<" "<<j<<endl;
                if(grid[i][j] == 0){
                    dfs(i, j, n, m, grid);
                }
            }
        }
    }
    
  
  //DFS for remaining non boundary 0's 
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 0){
                ans++;
                dfs(i, j, n, m, grid);
            }
        }
    }
    
    return ans;
}
};

