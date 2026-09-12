// Last updated: 9/12/2026, 1:01:24 PM
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vovel;
        unordered_map<char, int> consonent;

        for (char ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vovel[ch]++;
            } else {
                consonent[ch]++;
            }
        }
        int maxvovel = 0;
        for (auto& it : vovel) {
            if (it.second > maxvovel) {
                maxvovel = it.second;
            }
        }
        int maxconsonent = 0;
        for (auto& iti : consonent) {
            if (iti.second > maxconsonent) {
                maxconsonent = iti.second;
            }
        }

        int res = maxvovel + maxconsonent;

        return res;
    }
};