// Last updated: 9/12/2026, 1:06:18 PM
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