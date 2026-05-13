// Last updated: 5/13/2026, 10:34:41 PM
class Solution {
public:
    int vowelConsonantScore(string s) {
        int vovel = 0;
        int consonent = 0;

        for (char ch : s) {
            if (isalpha(ch)) { 
                ch = tolower(ch);
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vovel++;
                } else {
                    consonent++;
                }
            }
        }

        if(consonent ==0) return 0;

        int res = vovel / consonent;

        return res;
    }
};