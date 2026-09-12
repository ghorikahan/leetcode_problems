// Last updated: 9/12/2026, 1:04:20 PM
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