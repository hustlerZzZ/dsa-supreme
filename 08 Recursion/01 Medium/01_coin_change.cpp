#include <bits/stdc++.h>
using namespace std;

// L.C : 322. Coin Change

// T.C : O()
// S.C : O()
int solve(vector<int> &coins, int amount)
{
    if (amount == 0) // 0 amount k liye 0 coins
        return 0;

    int minCoin = INT_MAX;
    // har amount k liye poore coins k array ko traverse kr rhe h
    for (int i = 0; i < coins.size(); i++)
    {
        int coin = coins[i];
        // if coin value > amount -> no need to call recursive fn
        if (coin <= amount)
        {
            // 1 coin to use hogya , amount becomes amount - coins
            // baaki recursion dekhega
            int recursionAns = solve(coins, amount - coin);
            // ho skta h recursionAns valid ho ya invalid ho
            // invalid case ---> recursionAns ---> INT_MAX
            // valid case ----> recursionAns ---> not equal to INT_MAX

            if (recursionAns != INT_MAX)
            {
                int coinsUsed = 1 + recursionAns;
                // kya above ans min h
                minCoin = min(minCoin, coinsUsed);
            }
        }
    }

    return minCoin;
}

int coinChange(vector<int> &coins, int amount)
{
    int ans = solve(coins, amount);
    if (ans == INT_MAX)
        return -1;
    return ans;
}

int main()
{
    vector<int> coins = {1, 2, 5};
    int amount = 11;

    cout << coinChange(coins, amount);

    return 0;
}