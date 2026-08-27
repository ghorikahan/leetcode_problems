// Last updated: 8/27/2026, 10:46:45 PM
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 2) {
            return true;
        }
        long low = 1;
        long high = num;

        while (low <= high) {
            long mid = low + (high - low) / 2;

            if (mid * mid == num) {
                return true;
            } else if (mid * mid > num) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return false;
    }
};