class Solution {
public:
    int findMin(vector<int> &nums) {
        int minNums = nums[nums.size() - 1], left = 0, right = nums.size() - 1, mid;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] < nums[right]) {
                right = mid - 1;
                minNums = min(minNums, nums[mid]);
            }
            //else if (nums[mid] >= nums[left] && nums[mid] >= nums[right]) {
            else
            {
                left = mid + 1;
                minNums = min(minNums, nums[mid]);
            }
        }
        return minNums;
    }
};
