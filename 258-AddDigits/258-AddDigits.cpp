// Last updated: 5/14/2026, 12:22:31 AM
class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            int sum = 0;
            while (num) {
                sum += num % 10;
                num = num / 10;
            }
            num = sum;
        }

        return num;
    }
};