#include <iostream>
#include <vector>

using namespace std;

// Leet Code : 1. Two Sum

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

int main()
{
    vector<int> arr = {2, 7, 11, 15};

    vector<int> result = twoSumUsingNestedLoops(arr, 9);

    cout << result[0] << " " << result[1];

    return 0;
}