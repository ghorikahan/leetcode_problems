// Last updated: 5/13/2026, 10:35:20 PM
class Solution {
public:
    bool squareIsWhite(string coordinates) {

        if (coordinates[0] == 'a') {
            if (coordinates[1] % 2 == 0) {
                return true;
            }
            return false;
        } else if (coordinates[0] == 'b') {
            if (coordinates[1] % 2 != 0) {
                return true;
            }
            return false;
        } else if (coordinates[0] == 'c') {
            if (coordinates[1] % 2 == 0) {
                return true;
            }
            return false;
        } else if (coordinates[0] == 'd') {
            if (coordinates[1] % 2 != 0) {
                return true;
            }
            return false;
        } else if (coordinates[0] == 'e') {
            if (coordinates[1] % 2 == 0) {
                return true;
            }
            return false;
        } else if (coordinates[0] == 'f') {
            if (coordinates[1] % 2 != 0) {
                return true;
            }
            return false;
        } else if (coordinates[0] == 'g') {
            if (coordinates[1] % 2 == 0) {
                return true;
            }
            return false;
        } else if (coordinates[0] == 'h') {
            if (coordinates[1] % 2 != 0) {
                return true;
            }
            return false;
        }

        return false;
    }
};