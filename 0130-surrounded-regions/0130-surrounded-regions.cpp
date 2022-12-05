class Solution {
void dfs(int m,int n,int row,int col,vector<vector<char>>& board,vector<vector<int>> &vis,int delrow[],int delcol[]){
        vis[row][col]=1;
        //neighbours
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            //validation
            if(nrow>=0 && ncol>=0 && nrow<m && ncol<n && board[nrow][ncol]=='O' && vis[nrow][ncol]==0)
                dfs(m,n,nrow,ncol,board,vis,delrow,delcol);
        }
        
    }
public:
    void solve(vector<vector<char>>& board) {
        int m =board.size();
        int n =board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int delrow[]={-1,1,0,0};
        int delcol[]={0,0,-1,1};
        // l&r
        for(int i=0;i<m;i++){
            if(board[i][0]=='O' && vis[i][0]==0)
                dfs(m,n,i,0,board,vis,delrow,delcol);
            
             if(board[i][n-1]=='O' && vis[i][n-1]==0)
                dfs(m,n,i,n-1,board,vis,delrow,delcol);
            
        }
        
        //u&d
        for(int j=0;j<n;j++){
            if(board[0][j]=='O' && vis[0][j]==0)
                dfs(m,n,0,j,board,vis,delrow,delcol);
            
             if(board[m-1][j]=='O' && vis[m-1][j]==0)
                dfs(m,n,m-1,j,board,vis,delrow,delcol);
        }
        
            //fill remaining O's with X
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && vis[i][j]==0)
                    board[i][j]='X';
            }
        }
        
    }
};
