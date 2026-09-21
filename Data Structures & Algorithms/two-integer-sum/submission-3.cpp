class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> pos;

        for (int i = 0; i  < nums.size(); i ++) {
            int first_num = target - nums[i];

            auto it = pos.find(first_num);
            if (it != pos.end()) {
                return {it->second, i}; 
            }

            pos[nums[i]] = i; 
            
        }

        return {};
    }
};
