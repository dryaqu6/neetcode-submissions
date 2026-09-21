class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        std::array<int, 256> char_count = { 0 };
        for (int i = 0; i < s.size(); i ++) {
            char_count[s[i]] ++;
        }

        for (int i = 0; i < t.size(); i ++) {
            char_count[t[i]] --;

            if (char_count[t[i]] < 0) {
                return 0;
            }
        }

        return 1;
    }
};
