class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       
        int n=graph.size();
    vector<int>ind(n,0); 
    vector<vector<int>>adj(n); 
    for(int i=0;i<n;i++){
        for(auto it:graph[i]){
            adj[it].push_back(i);
            ind[i]++;
        }
    }
        queue<int>q;
        for(int i=0;i<graph.size();i++){
            if(ind[i]==0){
                q.push(i);
            }
        }
        vector<int>safe;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safe.push_back(node);
            for(auto it: adj[node]){
                ind[it]--;
                if(ind[it]==0){
                    q.push(it);
                }
            }
        }
        sort(safe.begin(),safe.end());
       return safe;
        
    }
};
        
    