class Solution {
public:
    vector<int> dfs(vector<int>adj[],int curr,int par,string &labels,vector<int>&ans)
    {
        vector<int>count(26,0);
        char x=labels[curr];
        count[x-'a']++;

        for(auto child:adj[curr])
        {
            if(child==par)continue;
            vector<int>childcount=dfs(adj,child,curr,labels,ans);
            for(int i=0;i<26;i++)
            {
                count[i]+=childcount[i];
            }
        }
        ans[curr]=count[x-'a'];
        return count;

    }
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int>adj[n];
        for(auto it:edges)
        {
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>ans(n,0);
        dfs(adj,0,-1,labels,ans);
        return ans;
    }
};