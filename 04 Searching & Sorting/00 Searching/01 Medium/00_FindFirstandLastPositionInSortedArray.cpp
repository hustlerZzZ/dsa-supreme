#include <iostream>
#include <vector>

using namespace std;

int findFirstOccurence(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ansIndex = -1;
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        if (arr[mid] == target)
        {
            ansIndex = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ansIndex;
}

int findLastOccurence(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ansIndex = -1;
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        if (arr[mid] == target)
        {
            ansIndex = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ansIndex;
}

// Leet Code : 34. Find First and Last Position of Element in Sorted Array

// T.C : O(nlogn)
// S.C : O(1)
vector<int> searchRange(vector<int> &nums, int target)
{
    return {findFirstOccurence(nums, target), findLastOccurence(nums, target)};
}

int main()
{
    vector<int> arr = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = searchRange(arr, target);

    for (auto &&i : result)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
