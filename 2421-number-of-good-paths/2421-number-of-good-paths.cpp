class Solution {

vector<map<int,int>>m;
vector<vector<int>>adj;
vector<int>flag;
public:

int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
    int n = vals.size();
      m.resize(n);
      adj.resize(n);
    
    for(auto &it : edges){
        int a= it[0];
        int b=it[1];
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
     int total=0;
    flag.resize(n,0);
      dfs(0,vals,total);
    
    return total+n;   
}
void dfs(int u , vector<int>&vals,int &total){
    flag[u]=1;
   
    for(auto &v: adj[u]){
        
        if(flag[v]==1){
            continue;
        }
        
        int cnt=0;
        dfs(v,vals,cnt);
        total+=cnt;
        
        auto it =m[v].lower_bound(vals[u]);
        m[v].erase(m[v].begin(),it);
        
        if(m[u].size()<m[v].size()){
            swap(m[u],m[v]);
        }
        for(auto &it : m[v]){
            total+=m[u][it.first]*it.second;
            m[u][it.first]+=it.second;
        }    
    }
    total+=m[u][vals[u]];
    ++m[u][vals[u]];
}
};