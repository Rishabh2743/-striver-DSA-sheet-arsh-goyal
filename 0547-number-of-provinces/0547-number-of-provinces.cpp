class Solution {
public:
    void dfs(int node,vector<int>&V,vector<int>adj[]){
        V[node]=1;
        for(auto it : adj[node]){
            if(!V[it]){
                dfs(it,V,adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v=isConnected.size();
		vector<int>adj[v];
		for(int i=0; i<v; i++){
			for(int j=0; j<v; j++){
				if(isConnected[i][j]==1 && i!=j){
					adj[i].push_back(j);
					adj[j].push_back(i);
				}
			}
		}
        int count =0;
        vector<int>V(v, 0);
        for(int i=0;i<v;i++){
            if(!V[i]){
                count++;
                dfs(i,V,adj);
            }
        }
        return count;
    }
};