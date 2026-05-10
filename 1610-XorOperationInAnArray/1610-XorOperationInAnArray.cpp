// Last updated: 5/10/2026, 6:42:53 PM
class Solution {
public:
    int xorOperation(int n, int start) {
        int result=0;
        for (int i = 0; i < n; i++) {
            result ^= (start + 2 * i);
        }

        return result;
    }
};