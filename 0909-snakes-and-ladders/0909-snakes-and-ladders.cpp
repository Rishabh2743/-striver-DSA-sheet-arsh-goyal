class Solution {
public:
    queue<int> res;
    int snakesAndLadders(vector<vector<int>>& board) {
        if(board[0][0]!= -1) return -1;

        int n = board.size();
        int end = n*n;

        vector<int> dist(n*n+1, -1);   
        dist[1] = 0;

        res.push(1);
        while(!res.empty()){
            int tmp = res.front();
            res.pop();

            if(tmp == end) return dist[n*n]; 
            else{
                for(int i=1; i<=6; i++){
                    int new_index = tmp + i;
                    if(new_index > end) break;

                    int r = n - (new_index - 1)/n - 1 ;
                    int c = (r%2 == (n-1)%2)?  (new_index-1) % n :  n - (new_index-1) % n - 1;

                    if(board[r][c]!=-1)  new_index = board[r][c]; 
                    
                    if(dist[new_index] == -1) {
                        dist[new_index] = dist[tmp]+1;
                        res.push( new_index );
                    } 
                }    
            }
        }

        return dist[n*n];
    }
};