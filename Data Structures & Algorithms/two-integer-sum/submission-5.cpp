class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Mẹo 1: Tắt đồng bộ hóa I/O để tăng tốc tối đa
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        std::unordered_map<int, int> pos;
        // Mẹo 2: Cấp phát trước bộ nhớ cho Map để tránh rehash
        pos.reserve(nums.size()); 

        for (int i = 0; i < nums.size(); i++) {
            int first_num = target - nums[i];

            // Mẹo 3: Tìm kiếm 1 lần duy nhất bằng .find()
            auto it = pos.find(first_num);
            if (it != pos.end()) {
                // it->second chính là vị trí (Value) được lưu trong Map
                return {it->second, i}; 
            }

            pos[nums[i]] = i; 
        }

        return {};
    }
};