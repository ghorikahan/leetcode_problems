// Last updated: 9/12/2026, 1:06:31 PM
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