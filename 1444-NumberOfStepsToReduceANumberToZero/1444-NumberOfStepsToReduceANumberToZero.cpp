// Last updated: 5/10/2026, 6:43:01 PM
class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;

        while (num) {
            if (num % 2 == 0) {
                num = num / 2;
                count++;
                continue;
            } else {
                num = num - 1;
                count++;
                continue;
            }
        }

        return count;
    }
};