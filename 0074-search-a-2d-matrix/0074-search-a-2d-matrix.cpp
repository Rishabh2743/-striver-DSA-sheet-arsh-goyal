class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;int j=0;
        while(i<matrix.size() && j< matrix[0].size()){
            if(matrix[i][j]==target){
                return true;
            }
            else if(i<matrix.size()-1&&target>=matrix[i+1][j]){
                i++;
            }
            
            else if(j<matrix[0].size()-1&&target>=matrix[i][j+1]){
                j++;
            }
            else {
                i++;
                j++;
            }
        }
        return false;
    }
};