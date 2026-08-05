// Last updated: 8/5/2026, 5:56:44 PM
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int sum = 0;
        sort(cost.begin(), cost.end());
        int count = 0;
        for (int i = cost.size() - 1; i >= 0; i--) {
            if (count == 2) {
                count = 0;
                continue;
            } else {
                sum += cost[i];
                count++;
            }
        }

        return sum;
    }
};