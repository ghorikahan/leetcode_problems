// Last updated: 5/10/2026, 6:42:57 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();
        int max = *max_element(candies.begin(),candies.end());
        vector<bool> res;
        for (int i = 0; i < size; i++) {
            if (candies[i] + extraCandies >= max) {
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }

        return res;
    }
};