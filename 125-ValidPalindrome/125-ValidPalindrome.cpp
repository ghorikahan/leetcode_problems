// Last updated: 5/10/2026, 6:43:37 PM
class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for (char ch : s) {
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
                (ch >= '0' && ch <= '9')) {
                if (ch >= 'A' && ch <= 'Z') {
                    ch += 32;
                }
                res += ch;
            }
        }

        int i = 0;
        int j = res.size() - 1;

        while (i < j) {
            if (res[i] != res[j]) {
                return false;
            }
            ++i;
            --j;
        }

        return true;
    }
};