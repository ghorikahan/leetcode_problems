// Last updated: 5/10/2026, 6:41:52 PM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> com;

        for (int i = 0; i < order.size(); i++) {
            for (int j = 0; j < friends.size(); j++) {
                if (order[i] == friends[j]) {
                    com.push_back(friends[j]);
                }
            }
        }

        return com;
    }
};