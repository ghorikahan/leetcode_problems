// Last updated: 9/12/2026, 1:05:41 PM
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int totalSum = 0;
        for (int k = 1; k <= arr.size(); k += 2) {
            int i = 0;
            int j = 0;
            int sum = 0;
            while (j < arr.size()) {
                sum += arr[j];
                if (j - i + 1 == k) {
                    totalSum += sum;
                    sum -= arr[i];
                    i++;
                }
                j++;
            }
        }

        return totalSum;
    }
};