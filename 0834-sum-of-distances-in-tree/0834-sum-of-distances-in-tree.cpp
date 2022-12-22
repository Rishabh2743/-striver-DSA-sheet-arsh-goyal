class Solution {
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
         vector<vector<int> > adj(n, vector<int>());
        vector<int> ans(n, 0);
        for(vector<int> x: edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        stack<int> s;
        vector<int> e(n, 0);
        vector<int> f(n, 0);
        s.push(0);
        int x;
        int c;
        int w;
        vector<int> mark(n, 0);
        mark[0] = 2;
        while(!s.empty()){
            x = s.top();
            if(mark[x] == 1){
                mark[x] = 0;
                c = 1;
                w = 0;
                for(int y: adj[x]){
                    if(mark[y] == 0){
                        c += e[y];
                        w += f[y] + e[y];
                    }
                }
                e[x] = c;
                f[x] = w;
                s.pop();
            }
            else if(mark[x] == 2){
                mark[x] = 1;
                for(int y: adj[x]){
                    if(mark[y] == 0){
                        mark[y] = 2;
                        s.push(y);
                    }
                }
            }
        }
        ans[0] = w;
        queue<int> q;
        q.push(0);
        mark[0] = 1;
        int d;
        while(!q.empty()){
            x = q.front();
            q.pop();
            c = ans[x];
            for(int y: adj[x]){
                if(mark[y] == 0){
                    d = c + n - 2*e[y];
                    ans[y] = d;
                    mark[y] = 1;
                    q.push(y);
                }
            }
        }
        return ans;
    }
};
    