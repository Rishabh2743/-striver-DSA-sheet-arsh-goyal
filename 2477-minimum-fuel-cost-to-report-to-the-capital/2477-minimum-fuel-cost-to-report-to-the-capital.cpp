 class Solution {
public:
long long ans=0;
int solve(int i,vector<int>adj[],int n,int seats,vector<int>&vis)
{
    vis[i]=1;
    long long cnt=1;

    for(auto x:adj[i])
    {
        if(vis[x]==0)
        {
            cnt+=solve(x,adj,n,seats,vis);
        }
    }
// should not add litres to our ans if we are at node 0 as we have arrived our destination
    if(i!=0)
    {
        double t=((double)cnt)/seats;
        ans+=ceil(t);
    }
    return cnt;
    
}
    long long minimumFuelCost(vector<vector<int>>& roads, int seats) {
        int n=roads.size()+1;
        vector<int>adj[n];
    
        for(auto x:roads)
        {
             adj[x[0]].push_back(x[1]);
             adj[x[1]].push_back(x[0]);
        }
        vector<int>vis(n,0);
        solve(0,adj,n,seats,vis);
        return ans;
       

    }
};