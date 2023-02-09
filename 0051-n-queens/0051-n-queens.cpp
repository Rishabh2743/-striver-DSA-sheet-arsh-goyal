class Solution {
public:
    void start(int c,vector<string> &b,vector<vector<string>> &ans,vector<int> &l,vector<int> &ud,vector<int> &ld,int n){
        if(c==n){
            ans.push_back(b);
            return;
        }
        for(int r=0;r<n;r++){
            if(l[r]==0 && ld[r+c]==0 && ud[n-1+c-r]==0){
                b[r][c]='Q';
                l[r]=1,ld[r+c]=1,ud[n-1+c-r]=1;
                start(c+1,b,ans,l,ud,ld,n);
                b[r][c]='.';
                l[r]=0,ld[r+c]=0,ud[n-1+c-r]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        string s(n,'.');
        vector<string> b(n,s);
        vector<int> l(n,0),ud(2*n-1,0),ld(2*n-1,0);
        start(0,b,ans,l,ud,ld,n);
        return ans;
    }
};