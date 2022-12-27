class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int row= mat.size();
        int col = mat[0].size();
        for(int i=0;i<row;i++){
            for(int j=i;j<i+1;j++){
                sum+=mat[i][j]+mat[row-j-1][j];
            }
        }
        if(row%2!=0){
            sum=sum-mat[row/2][col/2];
        }
        return sum;
    }
};