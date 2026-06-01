// Last updated: 6/1/2026, 1:07:31 PM
class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int ans1 = 0;
        int ans2 = 0;
        vector<int> res;

        for (int i = 0; i < nums1.size(); i++) {
            int temp = nums1[i];

            for (int j = 0; j < nums2.size(); j++) {
                if (temp == nums2[j]) {
                    ans1++;
                    break;
                }
            }
        }
        for (int i = 0; i < nums2.size(); i++) {
            int temp = nums2[i];

            for (int j = 0; j < nums1.size(); j++) {
                if (temp == nums1[j]) {
                    ans2++;
                    break;
                }
            }
        }
        res.push_back(ans1);
        res.push_back(ans2);

        return res;
    }
};