// Last updated: 5/10/2026, 6:41:49 PM
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