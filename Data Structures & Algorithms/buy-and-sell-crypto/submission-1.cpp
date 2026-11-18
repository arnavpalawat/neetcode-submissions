class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, l = 0, cur = 0;
        
        while (cur < prices.size()) {
            if (profit < (prices[cur] - prices[l])) {
                profit = (prices[cur] - prices[l]);
                cur++;
            } else if (prices[cur] - prices[l] < 0) {
                l++;
            } else {
                cur++;
            }
        }

        return profit;
    }
};
