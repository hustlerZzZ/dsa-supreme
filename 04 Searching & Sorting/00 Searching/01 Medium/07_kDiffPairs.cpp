#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>

using namespace std;

// Leetcode : 532. K-diff pairs in an Array

// Using Nested Loops (Bruteforce)
// T.C : O(n^2)
// S.C : O(1)
int findPairsUsingNestedLoops(vector<int> &nums, int k)
{
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (abs(nums[i] - nums[j]) == k)
            {
                count++;
            }
        }
    }

    return count;
}

// Using Two Pointer
// T.C : O(nlogn)
// S.C : O(1)
int findPairsUsingTwoPointer(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> set;

    int start = 0, end = 1;
    int count = 0;

    while (end <= nums.size())
    {
        int diff = nums[end] - nums[start];

        if (diff == k)
            set.insert({nums[start], nums[end]}), start++, end++;
        else if (diff > k)
            start++;
        else
            end++;

        if (start == end)
            end++;
    }

    return set.size();
}

int bs(vector<int> &nums, int start, int target)
{
    int end = nums.size() - 1;
    while (end >= start)
    {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

// Using Binary Search
// T.C : O(nlogn)
// S.C : O(1)
int findPairsUsingBinarySearch(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> set;

    for (int i = 0; i < nums.size(); i++)
    {
        if (bs(nums, i + 1, nums[i] + k) != -1)
        {
            set.insert({nums[i], nums[i] + k});
        }
    }

    return set.size();
}

int main()
{
    vector<int> arr = {3, 1, 4, 1, 5};
    int k = 2;

    int res = findPairsUsingBinarySearch(arr, k);

    cout << res << endl;

    return 0;
}
