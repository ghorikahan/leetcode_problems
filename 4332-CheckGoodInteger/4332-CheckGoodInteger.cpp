// Last updated: 8/5/2026, 5:54:46 PM
class Solution {
public:
    bool checkGoodInteger(int n) {
        bool istrue = true;

        int digitSum = 0;
        int squareSum = 0;

        while (n > 0) {
            squareSum+=pow(n%10,2);
            digitSum+=n%10;
            n = n / 10;
        }

        if(squareSum - digitSum >= 50){
            return true;
        }

        return false;
    }
};