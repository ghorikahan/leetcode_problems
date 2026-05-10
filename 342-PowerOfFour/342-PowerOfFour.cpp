// Last updated: 5/10/2026, 6:43:19 PM
class Solution {
public:
    bool isPowerOfFour(int n) {
        for (int i = 0; i < 30; i++) {
            double power = pow(4, i);
            if (power == n) {
                return true;
            }
        }
        return false;
    }
};