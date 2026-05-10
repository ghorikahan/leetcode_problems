// Last updated: 5/10/2026, 6:42:07 PM
class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int> arr;
        vector<int> nums1;
        vector<int> nums2;
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 1; i <= n; i++) {
            arr.push_back(i);
        }
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] % m == 0) {
                nums2.push_back(arr[j]);
            } else {
                nums1.push_back(arr[j]);
            }
        }

        for (int k = 0; k < nums1.size(); k++) {
            sum1 += nums1[k];
        }
        for (int l = 0; l < nums2.size(); l++) {
            sum2 += nums2[l];
        }

        int res = sum1 - sum2;

        return res;
    }
};