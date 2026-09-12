// Last updated: 9/12/2026, 1:01:29 PM
class Solution {
public:
    int findClosest(int x, int y, int z) {
        int per1 = abs(z-x);
        int per2 = abs(z-y);

        if(per1 > per2){
            return 2; 
        }
        if(per1 == per2){
            return 0;
        }

        return 1;
    }
};