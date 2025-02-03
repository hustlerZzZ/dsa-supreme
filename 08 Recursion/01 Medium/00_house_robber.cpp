#include <bits/stdc++.h>
using namespace std;

// L.C : 198. House Robber

// T.C : O()
// S.C : O()
// Using Recusrion
int solve(vector<int> &nums, int n, int i)
{
    // base case
    if (i >= n)
        return 0;

    // include
    int includeAns = nums[i] + solve(nums, n, i + 2);

    // exclude
    int excludeAns = 0 + solve(nums, n, i + 1);

    return max(includeAns, excludeAns);
}

int rob(vector<int> &nums)
{
    int index = 0;
    int ans = solve(nums, nums.size(), index);
    return ans;
}

int main()
{
    vector<int> houses = {2, 7, 9, 3, 1};

    cout << rob(houses);

    return 0;
}