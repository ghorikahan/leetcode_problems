// Last updated: 5/13/2026, 10:35:27 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ver;
        int j = 0;

        for (int i = 1; i < 100000; i++) {
            if (j < arr.size() && arr[j] == i) {
                j++;
            } else {
                ver.push_back(i);
            }

            if (ver.size() == k) {
                return ver[k - 1];
            }
        }

        return -1;
    }
};