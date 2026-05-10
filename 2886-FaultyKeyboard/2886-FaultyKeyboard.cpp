// Last updated: 5/10/2026, 6:42:10 PM
class Solution {
public:
    string finalString(string s) {
        string res = "";

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'i') {
                reverse(res.begin(), res.end());
            } else {
                res += s[i];
            }
        }

        return res;
    }
};