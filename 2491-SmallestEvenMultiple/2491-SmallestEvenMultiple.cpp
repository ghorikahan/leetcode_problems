// Last updated: 5/10/2026, 6:42:25 PM
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