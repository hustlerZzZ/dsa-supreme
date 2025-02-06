#include <bits/stdc++.h>
using namespace std;

// L.C : 416. Partition Equal Subset Sum

// T.C : O(2^n)
// S.C : O(n)
bool solve(vector<int> &nums, int target, int i)
{
    if (target < 0 || i == nums.size())
        return false;

    if (target == 0)
        return true;

    bool inc = solve(nums, target - nums[i], i + 1);
    bool exc = solve(nums, target, i + 1);

    return inc || exc;
}

bool canPartition(vector<int> &nums)
{
    // 1. Sum the elements
    int sum = accumulate(nums.begin(), nums.end(), 0);

    // 2. Check if our sum is odd or not
    // as we cannot divide the odd sum in two parts
    if (sum % 2 != 0)
        return false;

    // 3. Find the target element
    int target = sum >> 1;

    // 4. find a subset with subset sum = sum / 2
    return solve(nums, target, 0);
}

int main()
{
    vector<int> a = {1, 5, 11, 5};

    cout << canPartition(a);

    return 0;
}