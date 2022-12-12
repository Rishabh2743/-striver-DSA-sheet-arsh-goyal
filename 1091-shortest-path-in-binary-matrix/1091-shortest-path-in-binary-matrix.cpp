class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
     if(grid[0][0]!=0)
        return -1;
        queue<pair<int,pair<int,int>>> q;
        int n = grid.size();
        if(n==1)
        return 1;
        
        vector<vector<int>> dist(n,vector<int>(n,INT_MAX));
        
        dist[0][0] = 0;
        q.push({0,{0,0}});
        
        while(!q.empty()){
            auto it = q.front();
            int r = it.second.first;
            int c = it.second.second;
            int distance = it.first;
            
            q.pop();
            
            int delr[] = {-1,+1,0,0,+1,-1,-1,+1};
            int delc[] = {0,0,-1,+1,+1,-1,+1,-1};
            
            for(int i = 0;i<8;i++){
                int nrow = r + delr[i];
                int ncol = c + delc[i];
                
                if(nrow<n && nrow>=0 && ncol>=0 && ncol<n && grid[nrow][ncol] == 0 && distance+1 < dist[nrow][ncol]){
                    dist[nrow][ncol] = distance + 1;
                    if(nrow==n-1 && ncol== n-1)
                    return distance + 1 +1;
                    q.push({distance+1,{nrow,ncol}});            }
            }
        }
        return -1;
    }
};