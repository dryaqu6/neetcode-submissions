class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0, bot = matrix.size() - 1;
        int  left, mid, right;
        for (int i = 0; i < matrix.size(); i++ ) {
            left = 0;
            right = matrix[0].size() - 1;

            while (left <=  right) {
                mid =  (left + right) / 2;
                if (matrix[i][mid] < target) {
                    left = mid + 1;
                }
                else if (matrix[i][mid] > target) {
                    right = mid - 1;
                }
                else {
                    return 1;
                }
            }

        } 
        return 0;
    }
};
