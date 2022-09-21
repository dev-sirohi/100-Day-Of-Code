class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // My approach didn't work because of some errors, so we will try out the discussion approach
        
        // What we do is, we take the current element as the last colunm of the first row. If the target is smaller, we simply decrement the row until we find the target. If it is larger, we simply increment the column until we either get the target or it's smaller than th column element in which case we simply decrement the row again until we find it.
        
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        int row = 0, col = cols - 1;
        
        while (row < rows && col > -1) {
            int curr = matrix[row][col];
            
            if (curr == target) return true;
            
            if (target > curr) row++;
            else col--;
        }
        
        return false;
    }
};
