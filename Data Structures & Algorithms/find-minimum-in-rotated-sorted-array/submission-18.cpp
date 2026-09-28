class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > nums[right]) {
                // Minimum nằm chắc chắn ở nửa bên phải
                left = mid + 1;
            } else if (nums[mid] < nums[right]) {
                // Minimum nằm ở mid hoặc nửa bên trái
                right = mid;
            } else {
                // nums[mid] == nums[right]: Chưa rõ nằm bên nào,
                // loại bỏ bớt phần tử trùng ở right
                right--;
            }
        }
        
        return nums[left];
    }
};