// Last updated: 9/12/2026, 1:00:57 PM
class Solution {
public:
    int mirrorDistance(int n) {
        int prevNum = n;
        int newNum = 0;

        while (n > 0) {
            newNum = newNum * 10 + n % 10;
            n = n / 10;
        }

        int res = abs(prevNum - newNum);

        return res;
    }
};