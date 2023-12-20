
//https://leetcode.com/problems/buy-two-chocolates/submissions/1124108853/?envType=daily-question&envId=2023-12-20

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        return ((prices[1]+prices[0])<=money)?(money-prices[0]-prices[1]):money;
    }
};
