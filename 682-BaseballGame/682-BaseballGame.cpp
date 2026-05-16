// Last updated: 5/16/2026, 10:47:48 PM
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        int i = 0;
        while (i < operations.size()) {
            if (operations[i] == "D") {
                res.push_back(res.back() * 2);
            } else if (operations[i] == "C") {
                res.pop_back();
            } else if (operations[i] == "+") {
                int sum = res.back() + res[res.size() - 2];
                res.push_back(sum);
            }
            else{
                res.push_back(stoi(operations[i]));
            }
            i++;
        }
        int total = 0;

        for (int k : res) {
            total += k;
        }

        return total;
    }
};