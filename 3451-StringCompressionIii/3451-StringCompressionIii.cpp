// Last updated: 8/5/2026, 5:55:33 PM
class Solution {
public:
    string compressedString(string word) {
        string comp = "";

        for (int i = 0; i < word.size(); i++) {
            int count = 1;
            char ch = word[i];

            while (i < word.size() && word[i + 1] == ch && count < 9) {
                count++;
                i++;
            }

            comp += to_string(count);
            comp += word[i];
        }

        return comp;
    }
};