#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 53. Maximum Subarray

// T.C : O(n^2)
// S.C : O(1)
int maxSubArrayBruteForce(vector<int> &nums)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        int sum = 0;

        for (int j = i; j < nums.size(); j++)
        {
            sum += nums[j];
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

// T.C : O(n)
// S.C : O(1)
int maxSubArrayKadaneAlgo(vector<int> &nums)
{
    // 1. Do iteration
    // 2. While doing iteration do the sum
    // 3. While summing update the ans
    // 4. If sum < 0, reset it to 0

    int maxSum = INT_MIN;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        maxSum = max(sum, maxSum);
        if (sum < 0)
            sum = 0;
    }

    return maxSum;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int res = maxSubArrayKadaneAlgo(arr);

    cout << "The sum of max sub array : " << res << endl;

    return 0;
}
