// Last updated: 5/10/2026, 6:42:45 PM
class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1 = 0;
        int count2 = 0;
        string a = "";
        string b = "";
        for (int i = 0; i < s.size(); i++) {
            if (i < s.size() / 2) {
                a += s[i];
            } else {
                b += s[i];
            }
        }

        for (int j = 0; j < a.size(); j++) {
            if (a[j] == 'a' || a[j] == 'e' || a[j] == 'i' || a[j] == 'o' ||
                a[j] == 'u' || a[j] == 'A' || a[j] == 'E' || a[j] == 'I' ||
                a[j] == 'O' || a[j] == 'U') {
                count1++;
            }
        }
        for (int k = 0; k < b.size(); k++) {
            if (b[k] == 'a' || b[k] == 'e' || b[k] == 'i' || b[k] == 'o' ||
                b[k] == 'u' || b[k] == 'A' || b[k] == 'E' || b[k] == 'I' ||
                b[k] == 'O' || b[k] == 'U') {
                count2++;
            }
        }

        if (count1 == count2) {
            return true;
        }

        return false;
    }
};