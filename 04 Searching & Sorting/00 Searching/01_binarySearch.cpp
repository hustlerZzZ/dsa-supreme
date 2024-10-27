#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    if (binarySearch(arr, 4))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
