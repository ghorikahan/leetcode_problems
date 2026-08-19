// Last updated: 8/19/2026, 4:48:55 PM
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int l = 0, r = colors.size() - 1;
        int ans1 = 0;

        while (l <= r) {
            if (colors[l] == colors[r]) {
                r--;
            } else {
                ans1 = max(abs(l - r), ans1);
                l++;
            }
        }

        cout << ans1 << endl;

        l = 0;
        r = colors.size() - 1;
        int ans2 = 0;

        while (l <= r) {
            if (colors[l] == colors[r]) {
                l++;
            } else {
                ans2 = max(abs(l - r), ans2);
                r--;
            }
        }

        return max(ans1, ans2);
    }
};