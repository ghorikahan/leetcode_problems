// Last updated: 5/10/2026, 6:42:21 PM
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