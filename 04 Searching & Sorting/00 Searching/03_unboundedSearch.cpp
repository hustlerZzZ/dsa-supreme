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

int unboundedSearch(vector<int> &arr, int target)
{
    int i = 0, j = 1;

    while (arr[j] < target)
    {
        i = j;
        j = j * 2;
    }

    return bs(arr, i, j, target);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 34, 54, 76, 78};

    int ans = unboundedSearch(arr, 7);

    cout << ans << endl;

    return 0;
}