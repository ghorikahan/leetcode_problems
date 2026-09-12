// Last updated: 9/12/2026, 1:05:12 PM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = gain[0];
        vector<int> res;
        res.push_back(0);
        res.push_back(sum);

        for (int i = 1; i < gain.size(); i++) {
            sum += gain[i];
            res.push_back(sum);
        }
        int max = res[0];
        for (int j = 0; j < res.size(); j++) {
            if (max < res[j]) {
                max = res[j];
            }
        }

        return max;
    }
};