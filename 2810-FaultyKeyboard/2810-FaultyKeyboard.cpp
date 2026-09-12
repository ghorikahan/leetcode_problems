// Last updated: 9/12/2026, 1:02:44 PM
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