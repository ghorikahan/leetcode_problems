// Last updated: 5/10/2026, 6:43:13 PM
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