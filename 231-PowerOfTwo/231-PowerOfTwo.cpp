// Last updated: 5/10/2026, 6:43:29 PM
class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i < 90; i++) {
            double power = pow(2, i);
            if (power == n) {
                return true;
            }
        }
        return false;
    }
};