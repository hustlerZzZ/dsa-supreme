#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 1. Two Sum
// GFG : Two Sum - Pair with Given Sum

vector<int> twoSumUsingNestedLoops(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {nums[i], nums[j]};
            }
        }
    }

    return {-1, -1};
}

//  Two Pointer
vector<int> twoSumUsingTwoPointer(vector<int> &nums, int target)
{
    int start = 0, end = nums.size();

    sort(nums.begin(), nums.end());

    while (end > start)
    {
        if (nums[start] + nums[end] == target)
            return {nums[start], nums[end]};

        if (nums[start] + nums[end] < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    return {-1, -1};
}

int main()
{
    vector<int> arr = {1, 4, 45, 6, 10, 8};

    vector<int> result = twoSumUsingNestedLoops(arr, 16);

    cout << result[0] << " " << result[1];

    return 0;
}