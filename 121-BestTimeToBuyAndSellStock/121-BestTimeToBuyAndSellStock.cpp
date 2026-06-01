// Last updated: 6/1/2026, 1:09:43 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice = prices[0];
        int maxprofit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minprice) {
               minprice = prices[i];
            } else {
               int profit = prices[i] - minprice;
               maxprofit = max(maxprofit,profit);
            }
        }

        return maxprofit;
    }
};