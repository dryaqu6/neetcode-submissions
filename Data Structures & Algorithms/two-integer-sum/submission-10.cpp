class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 1. Tối ưu hóa tốc độ đọc dữ liệu đầu vào của C++
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        std::unordered_map<int, int> pos;
        
        // 2. Cấp phát trước bộ nhớ để tránh việc Map phải nới rộng (Rehash) giữa chừng
        pos.reserve(nums.size());
        
        // 3. Ép Map sử dụng bảng băm rộng gấp đôi kích thước mảng 
        // Giúp triệt tiêu hoàn toàn việc các số khác nhau bị băm trùng vào một ô (Collision)
        pos.max_load_factor(0.25); 

        for (int i = 0; i < nums.size(); i++) {
            int first_num = target - nums[i];

            if (pos.count(first_num)) {
                return {pos[first_num], i};
            }

            pos[nums[i]] = i; 
        }

        return {};
    }
};
