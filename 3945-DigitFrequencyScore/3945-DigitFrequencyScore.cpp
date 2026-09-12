// Last updated: 9/12/2026, 1:00:39 PM
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