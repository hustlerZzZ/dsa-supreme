#include <bits/stdc++.h>
using namespace std;

// L.C : 45. Jump Game

void solve(vector<int> &nums, int i, int &ans, int step)
{
    if (i == nums.size() - 1)
    {
        ans = min(ans, step);
        return;
    }

    if (i >= nums.size())
        return;

    for (int jump = 1; jump <= nums[i]; jump++)
        solve(nums, i + jump, ans, step + 1);
}

int jump(vector<int> &nums)
{
    int ans = INT_MAX;
    solve(nums, 0, ans, 0);
    return ans;
}

int main()
{
    vector<int> num = {2, 3, 1, 1, 4};

    cout << jump(num);

    return 0;
}