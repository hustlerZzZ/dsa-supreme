#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 33. Search in Rotated Sorted Array

// T.C : O(logn)
// S.C : O(1)
int getPivotIndex(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ansIndex = -1;

    while (end >= start)
    {
        if (arr[mid] > arr[mid + 1])
            return mid;
        else if (arr[mid] < arr[mid - 1])
            return mid - 1;
        else if (arr[start] > arr[mid])
            end = mid - 1;
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }
    return ansIndex;
}

// T.C : O(logn)
// S.C : O(1)
int binarySearch(vector<int> &arr, int start, int end, int target)
{
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    vector<int> mountain = {4, 5, 6, 7, 0, 1, 2};

    int peakIndex = getPivotIndex(mountain);

    cout << "Peak index of the mountain is : " << peakIndex << endl;

    int res1 = binarySearch(mountain, 0, peakIndex, 3);
    int res2 = binarySearch(mountain, peakIndex + 1, mountain.size(), 0);

    cout << res1 << " " << res2 << endl;

    return 0;
}
