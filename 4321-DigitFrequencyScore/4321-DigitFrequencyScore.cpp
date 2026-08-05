// Last updated: 8/5/2026, 5:54:49 PM
class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;

        while(n>0){
            sum += n%10;
            n = n/10;
        }

        return sum;
    }
};