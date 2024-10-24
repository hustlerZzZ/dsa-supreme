#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Leet Code : 724. Find Pivot Index

// T.C : O(n^2)
// S.C : O(1)
int pivotIndexBruteForce(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int leftSum = 0, rightSum = 0;

        // For leftSum
        for (int j = 0; j < i; j++)
        {
            leftSum += nums[j];
        }

        // For rightSum
        for (int j = i + 1; j < nums.size(); j++)
        {
            rightSum += nums[j];
        }

        if (leftSum == rightSum)
            return i;
    }

    return -1;
}

// T.C : O(n)
// S.C : O(n)
int pivotIndexPrefixSum(vector<int> &nums)
{
    vector<int> leftSum(nums.size(), 0);
    vector<int> rightSum(nums.size(), 0);

    for (int i = 1; i < nums.size(); i++)
    {
        leftSum[i] = leftSum[i - 1] + nums[i - 1];
    }

    for (int i = nums.size() - 2; i >= 0; i--)
    {
        rightSum[i] = rightSum[i + 1] + nums[i + 1];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (rightSum[i] == leftSum[i])
            return i;
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 1, -1};

    int result = pivotIndexPrefixSum(arr);

    cout << result << " ";

    return 0;
}