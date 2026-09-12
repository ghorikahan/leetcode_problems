// Last updated: 9/12/2026, 1:03:37 PM
class Solution {
public:
    int smallestEvenMultiple(int n) {
        int res;

        for (int i = 1; i <= 50000; i++) {
            if (i % 2 == 0 && i % n == 0) {
                res = i;
                break;
            }
        }

        return res;
    }
};