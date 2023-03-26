class Solution {
public:
    map<int,int> partof; 
    int DFS(int i , vector<int>&visited, vector<int>&edges, int count, int source)
    {       
    
        count++;
        if(visited[i]!=-1  && partof[i]==source)
        {
            //cout<<"Eccxe";
            return count-visited[i];
        }
        else if(visited[i]!=-1 && partof[i]!=source)
            return -1;
        visited[i]=count;
        partof[i]=source;
            if(edges[i]!=-1)
            return DFS(edges[i],visited,edges,count,source);
        return -1;
    }
    int longestCycle(vector<int>& edges) {
        //visited array // will mark count 
        //partof map // will mark source vertex
        int ans=-1,n=edges.size();
        vector<int> visited(n,-1);
        for(int i=0;i<n;i++)
        {
            if(visited[i]==-1)
                ans= max(ans,DFS(i,visited,edges,0,i));
        }
        return ans;
    }
};