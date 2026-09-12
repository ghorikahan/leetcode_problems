// Last updated: 9/12/2026, 1:04:02 PM
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int index = -1;
        string res = "";

        for (int i = 0; i < words.size(); i++) {
            int j = 0;
            int k = words[i].size() - 1;

            while (j < k) {
                if (words[i][j] == words[i][k]) {
                    j++;
                    k--;
                } else {
                    break;
                }
            }

            if (j >= k) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            return "";
        }
        res = words[index];

        return res;
    }
};