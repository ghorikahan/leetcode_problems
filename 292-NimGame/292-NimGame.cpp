// Last updated: 5/10/2026, 6:43:22 PM
class Solution {
public:
    bool canWinNim(int n) {
        if (n % 4 == 0) {
            return false;
        }

        return true;
    }
};