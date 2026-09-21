class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> exist;
        exist.clear();

        for (int i = 0; i < nums.size(); i++) {
                if (exist[nums[i]] == 1) {
                    return 1;
                }
                    
            exist[nums[i]] = 1;
        }

        return 0;
    }
};