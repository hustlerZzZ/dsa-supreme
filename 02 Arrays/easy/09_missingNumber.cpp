#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Leet Code : 268. Missing Number

// T.C : O(nlogn)
// S.C : o(1)
int missingNumberBruteforce(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
        if (i != nums[i])
            return i;

    return nums.size();
}

// T.C : O(n)
// S.C : O(1)
int missingNumberSumOfTheArray(vector<int> &nums)
{
    int n = nums.size();
    int sumOfArray = 0;
    int realSumOfnNumbers = (n * (n + 1)) / 2;

    for (int i = 0; i < n - 1; i++)
    {
        sumOfArray += nums[i];
    }

    return realSumOfnNumbers - sumOfArray;
}

// T.C : O(n)
// S.C : O(1)
int missingNumberXORMethod(vector<int> &nums)
{
    int n = nums.size();
    int result = 0;

    for (int i = 0; i < n + 1; i++)
        result ^= i;

    for (int i = 0; i < n; i++)
        result ^= nums[i];

    return result;
}

int main()
{
    vector<int> arr = {8, 6, 4, 2, 3, 5, 7, 0, 1};

    int result = missingNumberBruteforce(arr);

    cout << result << " ";

    return 0;
}