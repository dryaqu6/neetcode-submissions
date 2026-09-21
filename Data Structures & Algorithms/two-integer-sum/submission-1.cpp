class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> freq;
        std::unordered_map<int, int> pos;

        for (int i = 0; i  < nums.size(); i ++) {
            freq[nums[i]] ++;
            pos[nums[i]] = i;
        }

        for (int i = 0; i  < nums.size(); i ++) {
            if (freq[nums[i]] > 0) {
                freq[nums[i]] --;
                int se_num = target - nums[i];

                if (freq[se_num] > 0) {
                    return {i, pos[se_num]};
                }
            }
        }

        return {};
    }
};
