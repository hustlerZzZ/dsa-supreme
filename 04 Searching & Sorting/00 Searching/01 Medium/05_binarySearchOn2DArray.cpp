#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Leetcode : 74. Search a 2D Matrix

// T.C : O(log(row * col))
// S.C : O(1)
int binarySearch(vector<vector<int>> &arr, int target)
{
    int rows = arr.size();
    int cols = arr[0].size();
    int n = rows * cols; // total ele

    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        if (arr[rowIndex][colIndex] == target)
            return mid;
        else if (arr[rowIndex][colIndex] < target)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    vector<vector<int>> arr = {
        {10, 20, 30}, {40, 50, 60}, {60, 80, 90}};

    int res = binarySearch(arr, 60);

    cout << res << endl;

    return 0;
}
