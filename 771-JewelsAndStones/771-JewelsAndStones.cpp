// Last updated: 9/12/2026, 1:07:46 PM
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < stones.length(); i++) {
            for (int j = 0; j < jewels.length(); j++) {
                if (jewels[j] == stones[i]) {
                    count++;
                }
            }
        }

        return count;
        
    }
};