#include <bits/stdc++.h>
using namespace std;

void profit(vector<int> &prices, int index, int &min_price, int &max_profit)
{
    // base case
    if (index == prices.size())
        return;

    // solving one case
    if (prices[index] < min_price)
        min_price = prices[index];

    if ((prices[index] - min_price) > max_profit)
        max_profit = prices[index] - min_price;

    // recursion call
    profit(prices, index + 1, min_price, max_profit);
}

// T.C : O(n)
// S.C : O(n)
int maxProfit(vector<int> &prices)
{
    int min_price = INT_MAX;
    int max_profit = INT_MIN;
    profit(prices, 0, min_price, max_profit);
    return max_profit;
}

int main()
{
    vector<int> price = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(price);

    return 0;
}