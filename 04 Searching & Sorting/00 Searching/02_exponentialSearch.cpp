#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bs(vector<int> &arr, int start, int end, int target)
{
    while (end >= start)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

// T.C : O(log^logm-1)
// S.C : O(1)
int exponentialSearch(vector<int> &arr, int target)
{
    int n = arr.size();

    if (arr[0] == target)
        return 0;
    int i = 1;

    while (i < n && arr[i] <= target)
    {
        i = i * 2;
    }

    return bs(arr, i / 2, min(i, n - 1), target);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 34, 54, 76, 78};

    int ans = exponentialSearch(arr, 7);

    cout << ans << endl;

    return 0;
}
