// Last updated: 9/12/2026, 1:03:22 PM
class Solution {
public:
    int countDigits(int num) {
        int newnum = num;
        int count=0;

        while(num){
            int onenum = num%10;
            if(newnum % onenum == 0){
                count++;
            }
            num = num/10;
        }

        return count;
    }
};