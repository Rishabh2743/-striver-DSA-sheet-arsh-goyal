class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
      vector<vector<int>>v(mat.size(), vector<int>(mat[0].size(), 0));
		vector<vector<int>>ans(mat.size(), vector<int>(mat[0].size(), 0));
		queue<pair<pair<int, int>, int>>q;
		for(int i=0; i<mat.size(); i++){
			for(int j=0; j<mat[0].size(); j++){
				if(!v[i][j] && !mat[i][j]){
					v[i][j]=1;
					q.push({{i, j}, 0});
				}
			}
		}
		while(!q.empty()){
			int x=q.front().first.first, y=q.front().first.second, cnt=q.front().second;
			q.pop();
			if(x>0 && !v[x-1][y] && mat[x-1][y]==1){
				v[x-1][y]=1;
				q.push({{x-1, y}, cnt+1});
				ans[x-1][y]=cnt+1;
			}
			if(y>0 && !v[x][y-1] && mat[x][y-1]==1){
				v[x][y-1]=1;
				q.push({{x, y-1}, cnt+1});
				ans[x][y-1]=cnt+1;
			}
			if(x<mat.size()-1 && !v[x+1][y] && mat[x+1][y]==1){
				v[x+1][y]=1;
				q.push({{x+1, y}, cnt+1});
				ans[x+1][y]=cnt+1;
			}
			if(y<mat[0].size()-1 && !v[x][y+1] && mat[x][y+1]==1){
				v[x][y+1]=1;
				q.push({{x, y+1}, cnt+1});
				ans[x][y+1]=cnt+1;
			}
		}
		return ans;
	}
};
   