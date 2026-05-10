// Last updated: 5/10/2026, 6:42:03 PM
class Solution {
public:
    int scoreOfString(string s) {
        vector<int> num;
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            num.push_back(int(s[i]));
        }

        for (int j = 0; j < num.size(); j++) {
            if (j == num.size() - 1) {
                continue;
            }
            res = res + abs(num[j] - num[j + 1]);
        }

        return res;
    }
};