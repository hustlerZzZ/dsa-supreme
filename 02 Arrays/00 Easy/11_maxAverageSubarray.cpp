#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 643. Maximum Average Subarray I

// T.C : O(n^2)
// S.C : O(1)
double findMaxAverageFindingAllSubArray(vector<int> &nums, int k)
{
    int maxSum = INT_MIN;
    int i = 0, j = k - 1;
    while (nums.size() > j)
    {
        int sum = 0;
        for (int y = i; y <= j; y++)
            sum += nums[y];

        maxSum = max(maxSum, sum);
        i++, j++;
    }

    double maxAvg = (double)maxSum / k;

    return maxAvg;
}

// T.C : O(n)
// S.C : O(1)
double findMaxAverageSlidingWindow(vector<int> &nums, int k)
{
    int i = 0, j = k - 1;
    int sum = 0;

    for (int y = i; y <= j; y++)
        sum += nums[y];

    int maxSum = sum;
    j++;

    while (nums.size() > j)
    {
        sum -= nums[i++];
        sum += nums[j++];
        maxSum = max(maxSum, sum);
    }

    double maxAvg = maxSum / (double)k;
    return maxAvg;
}

int main()
{
    vector<int> arr = {1, 12, -5, -6, 50, 3};
    double result = findMaxAverageSlidingWindow(arr, 4);
    cout << result << " ";
    return 0;
}