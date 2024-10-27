#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 643. Maximum Average Subarray I

// T.C : O(nlogn)
// S.C : O(n)
void moveAllUsingSort(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}

// T.C : O(n)
// S.C : O(1)
void dutchNationalFlag(vector<int> &nums)
{
    int low = 0, high = nums.size();

    while (high > low)
    {
        if (nums[high] > 0)
        {
            high--;
        }
        else
        {
            swap(nums[high], nums[low]);
            high--, low++;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2, -3, 4, -5, 6};

    dutchNationalFlag(arr);

    for (auto &&i : arr)
    {
        cout << i << " ";
    }
    return 0;
}