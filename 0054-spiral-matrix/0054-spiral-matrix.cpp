class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        // row & col
        int row = matrix.size();
        int col = matrix[0].size();
        
        // sides 
        int left=0;
        int right = col-1;
        int top =0;
        int bottom = row-1;

        while( top <= bottom && left <= right ){
            //left -> right
            for( int i=left; i<= right; i++ ) ans.push_back(matrix[top][i]);
            top++;
            //top -> bottom
            for( int i=top; i<= bottom; i++ ) ans.push_back(matrix[i][right]);
            right--;

            //right -> left
            if( top <= bottom ){
                for( int i=right; i>=left; i-- ) ans.push_back(matrix[bottom][i]);
                bottom--;
            }
            //bottom -> top
            if( left <= right ){
                for( int i=bottom; i>=top; i-- ) ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};