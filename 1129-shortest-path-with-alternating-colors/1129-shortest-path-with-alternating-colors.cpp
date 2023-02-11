class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
          vector<int> ans(n,INT_MAX);
        vector<int> blue[n],red[n];
        ans[0] = 0;
        for(auto it : redEdges){
            red[it[0]].push_back(it[1]);
        }
        for(auto it : blueEdges){
            blue[it[0]].push_back(it[1]);
        }
        vector<vector<int>> vis(n,vector<int>(2,0));
        queue<vector<int>> q;//index,color,count
        q.push({0,-1,0});
        int flag = false;
        while(!q.empty()){
            auto n = q.size();
            
            while(n--){
                auto it = q.front();
                q.pop();
                flag = false;
                int index = it[0];
                int cost = it[2];
                int color = it[1];//1->blue 2->red
                for(auto it : blue[index]){
                    if(color!=1 and !vis[it][0]){
                        q.push({it,1,cost+1});
                        ans[it] = min(ans[it],cost+1);
                        vis[it][0] = 1;
                        flag = true;
                    }
                }
                for(auto it : red[index]){
                    if(color!=2 and !vis[it][1]){
                        q.push({it,2,cost+1});
                        ans[it] = min(ans[it],cost+1);
                        vis[it][1] = 1;
                        flag = true;
                    }
                }
                
                
            }
        }
    for(int i=0;i<n;i++){
        if(ans[i]==INT_MAX)
            ans[i] = -1;
    }
    return ans;
    }
};
    