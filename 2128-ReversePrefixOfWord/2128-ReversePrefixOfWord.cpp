// Last updated: 8/5/2026, 5:56:58 PM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp = "";
        int count = 0;

        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch && count == 0) {
                temp += word[i];
                reverse(temp.begin(), temp.end());
                count++;
            } else if (count == 1) {
                temp+=word[i];
            } else {
                temp += word[i];
            }
        }

        return temp;
    }
};