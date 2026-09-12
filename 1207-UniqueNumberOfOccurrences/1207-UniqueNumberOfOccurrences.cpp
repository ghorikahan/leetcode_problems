// Last updated: 9/12/2026, 1:06:47 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for (int val : arr) {
            mp[val]++;
        }

        unordered_set<int> count;

        for (auto& it : mp) {
            count.insert(it.second);
        }

        if (count.size() == mp.size()) {
            return true;
        }
        return false;
    }
};