class Solution {
public:
       
   void dfs(vector<vector<int>>& image,vector<vector<int>>& ans,int row,
int col,int color,int iniColor){
    ans[row][col]=color;
    int delrow[]={-1,0,1,0};
    int delcol[]={0,1,0,-1};
    int n=image.size();
    int m=image[0].size();
    for(int i=0; i<4; i++){
        int nrow=row+delrow[i];
        int ncol=col+delcol[i];

        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && 
        image[nrow][ncol]==iniColor && ans[nrow][ncol]!=color){
            dfs(image,ans,nrow,ncol,color,iniColor);
        }
    }

}
vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int iniColor = image[sr][sc];
    vector<vector<int>> ans = image;
    dfs(image,ans,sr,sc,color,iniColor);

    return ans;

}
};