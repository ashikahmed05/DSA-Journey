// Last updated: 11/9/2025, 4:38:43 PM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size() - 1;
        int row = matrix.size() - 1;
        int r = row;
        int l = 0;
        while (r >= l){
            int mid = l + (r - l)/2;
            if (matrix[mid][0] <= target && matrix[mid][m] >= target){
                if (matrix[mid][0] == target || matrix[mid][m] == target){
                    return true;
                } else {
                    row = mid;
                    break;
                }
            } else if (matrix[mid][0] > target){
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        auto it = lower_bound(matrix[row].begin(), matrix[row].end(), target);
        if (it != matrix[row].end() && *it == target) return true;

        return false;

        
    }
};