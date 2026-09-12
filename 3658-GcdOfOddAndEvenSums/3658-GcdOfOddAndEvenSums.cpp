// Last updated: 9/12/2026, 1:01:19 PM
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int evencount = 0;
        int evensum = 0;
        int oddcount = 0;
        int oddsum = 0;
        int temp = n;

        while (evencount < n || oddcount < n) {
            if (temp % 2 == 0 && evencount <= n) {
                evensum += temp;
                evencount++;
                temp++;
            } else if (temp % 2 != 0 && oddcount <= n) {
                oddsum += temp;
                oddcount++;
                temp++;
            } else {
                temp++;
            }
        }

        int res = gcd(oddsum, evensum);

        return res;
    }
};