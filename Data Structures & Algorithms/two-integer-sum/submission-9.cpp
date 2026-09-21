class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Tối ưu I/O tốc độ cao
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = nums.size();
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = {nums[i], i};
        }

        // Sắp xếp mảng theo giá trị tăng dần
        sort(arr.begin(), arr.end());

        int left = 0;
        int right = n - 1;

        while (left < right) {
            int current_sum = arr[left].first + arr[right].first;

            if (current_sum == target) {
                int idx1 = arr[left].second;
                int idx2 = arr[right].second;
                
                // ĐẢM BẢO SỬA LỖI: Trả về chỉ số nhỏ trước, chỉ số lớn sau
                return {min(idx1, idx2), max(idx1, idx2)}; 
            }
            if (current_sum < target) {
                left++;
            } else {
                right--;
            }
        }

        return {};
    }
};
