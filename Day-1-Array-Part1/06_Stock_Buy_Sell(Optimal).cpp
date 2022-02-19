#include <bits/stdc++.h>
using namespace std;

// o(N) solution easy approach
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minBuy = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            minBuy = min(minBuy, prices[i]);
            maxProfit = max(maxProfit, prices[i] - minBuy);
        }
        return maxProfit;
    }
};