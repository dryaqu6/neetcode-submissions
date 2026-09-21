class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> pos;

        for (int i = 0; i  < nums.size(); i ++) {
            int first_num = target - nums[i];

            if (pos.count(first_num)) {
                    return {pos[first_num], i};
            }

            pos[nums[i]] = i; 
            
        }

        return {};
    }
};