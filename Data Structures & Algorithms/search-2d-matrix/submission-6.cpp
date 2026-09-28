class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size() - 1, cols = matrix[0].size() - 1;

        int top = 0, bot = rows;
        while(top <= bot){
            int row = top + ((bot - top) / 2);
            if(target > matrix[row][cols]) top = row + 1;
            else if(target < matrix[row][0]) bot = row - 1;
            else{ break; }
        }

        if(top > bot) return false;

        int row = top + ((bot - top ) / 2);
        int l = 0, r = cols;
        while(l <= r){
            int m = l + ((r - l ) / 2);
            if(target > matrix[row][m]) l = m + 1;
            else if( target < matrix[row][m]) r = m - 1;
            else{ return true; }
        }
        return false;
    }
};
