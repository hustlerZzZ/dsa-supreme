#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 287. Find the Duplicate Number

// T.C : O(nlogn)
// S.C : O(n)
int findDuplicateUsingSort(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            return nums[i];
    }

    return -1;
}

// T.C : O(n)
// S.C : O(1)
int negativeMarkingMethod(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if (nums[index] < 0)
            return index;
        nums[index] *= -1;
    }

    return -1;
}

int swappingMethod(vector<int> &nums)
{
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }

    return nums[0];
}

int main()
{
    vector<int> arr = {1, 3, 4, 2, 2};

    int result = swappingMethod(arr);

    cout << "Result :" << result << endl;

    return 0;
}