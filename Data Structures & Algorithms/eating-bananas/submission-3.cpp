class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int time, k = 1;
        int mid, left = 1, right = *max_element(piles.begin(), piles.end());
        while (left <= right) {
            mid = left + (right - left) / 2;
            
            time = 0;
            for (int pi: piles) {
                time += (pi + mid - 1) / mid;
            }

            if (time > h) {
                left = mid + 1;
            }
            else {
                k = mid;
                right = mid - 1;
            }
        }

        return k;
    }
};

