class Solution {
public:
   bool valid(vector<vector<int>>& m, int r, int c){
    int curr = m[r][c];
    int n = m.size();
    for(int i = 0; i < n; i++){
        if(m[r][i] == curr && i != c){
            return false;
        }
        if(m[i][c] == curr && i != r){
            return false;
        }
    }
    return true;
}
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        set<int> st;
        for(int i = 1; i <= n; i++){
            st.insert(i);
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(st.find(matrix[i][j]) != st.end()){
                    if(valid(matrix, i, j)){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
            }
        }

        return true;
    }
};