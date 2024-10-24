#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Leet Code : 26. Remove Duplicates from Sorted Array

// T.C : O(n)
// S.C : O(1)
int removeDuplicatesTwoPointer(vector<int> &nums)
{
    int i = 1, j = 0;

    while (nums.size() > i)
    {
        if (nums[i] == nums[j])
            i++;
        else
            nums[++j] = nums[i++];
    }

    return j + 1;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int result = removeDuplicatesTwoPointer(arr);

    cout << result << " ";

    return 0;
}