// Last updated: 5/10/2026, 6:43:18 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            swap(s[left],s[right]);
            ++left;
            --right;
        }
    }

}
;