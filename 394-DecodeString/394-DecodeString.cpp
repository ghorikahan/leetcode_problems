// Last updated: 6/8/2026, 10:55:51 PM
class Solution {
public:
    string decodeString(string s) {
        int i = 0;
        return decode(s, i);
    }

    string decode(string &s, int &i) {
        string result = "";

        while (i < s.size() && s[i] != ']') {

            // If character is alphabet
            if (isalpha(s[i])) {
                result += s[i];
                i++;
            }

            // If character is digit
            else if (isdigit(s[i])) {

                int num = 0;

                // Build the complete number
                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                // Skip '['
                i++;

                // Decode the substring inside brackets
                string decoded = decode(s, i);

                // Skip ']'
                i++;

                // Repeat decoded string num times
                while (num--) {
                    result += decoded;
                }
            }
        }

        return result;
    }
};