// Last updated: 5/10/2026, 6:42:46 PM
class Solution {
public:
    int minPartitions(string n) {
        vector<int> arr(n.length());
        for (int i = 0; i < n.length(); i++) {
            arr[i] = n[i] - '0';
        }
        int max = arr[0];

        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        return max;
    }
};