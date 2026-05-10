// Last updated: 5/10/2026, 6:43:21 PM
class Solution {
public:
    bool isPowerOfThree(int n) {
        for (int i = 0; i < 30; i++) {
            double power = pow(3, i);
            if (power == n) {
                return true;
            }
        }
        return false;
    }
};