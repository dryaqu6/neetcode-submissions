class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0, bot = matrix.size() - 1, center;
        int  left, mid, right;
        while (top <= bot) {
            center = (top + bot) / 2;
            if (matrix[center][0] > target) {
                bot = center - 1;
            }
            else if (matrix[center][matrix[0].size() - 1] < target) {
                top = center + 1;
            }
            else {
                top = bot + 1;
                left = 0;
                right = matrix[0].size() - 1;

                while (left <=  right) {
                    mid =  (left + right) / 2;
                    if (matrix[center][mid] < target) {
                        left = mid + 1;
                    }
                    else if (matrix[center][mid] > target) {
                        right = mid - 1;
                    }
                    else {
                        return 1;
                    }

                }
            
            }
        } 
        return 0;
    }
};
