// Last updated: 8/5/2026, 5:59:31 PM
class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        if (s.size() == 0) {
            return 0;
        }

        for (int i = 0; i < s.size(); i++) {
            string str = "";
            while (i < s.size() && s[i] != ' ') {
                str += s[i];
                i++;
            }
            if(str.size() > 0) count++;
        }

        return count;
    }
};