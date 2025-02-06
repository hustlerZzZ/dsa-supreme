#include <bits/stdc++.h>
using namespace std;

// L.C : 55. Jump Game

bool solve(vector<int> &nums, int index)
{
    if (nums.size() < index)
        return false;

    if (nums.size() - 1 == index)
        return true;

    if (nums[index] == 0)
        return false;

    int one = solve(nums, index + 1);
    int jump = solve(nums, index + nums[index]);

    return one || jump;
}

bool canJump(vector<int> &nums)
{
    return solve(nums, 0);
}

int main()
{
    vector<int> nums = {2, 3, 1, 1, 4};

    cout << canJump(nums);

    return 0;
}