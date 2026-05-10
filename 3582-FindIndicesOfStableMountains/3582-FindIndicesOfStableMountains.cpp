// Last updated: 5/10/2026, 6:41:57 PM
class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> res;

        for (int i = 0; i < height.size(); i++) {
            if (height[i] > threshold && i != height.size() - 1) {
                res.push_back(i + 1);
            }
        }

        return res;
    }
};