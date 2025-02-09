#include <bits/stdc++.h>
using namespace std;

void printAllSubArraysUtil(vector<int> &arr, int start, int end)
{
    // base case
    if (end == arr.size())
        return;

    // one case solution
    for (int i = start; i <= end; i++)
        cout << arr[i] << " ";

    cout << endl;

    // recursion call
    printAllSubArraysUtil(arr, start, end + 1);
}

// T.C : O(n^2)
// S.C : O(n)
void printSubarray(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int end = i;
        printAllSubArraysUtil(nums, i, end);
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    printSubarray(arr);

    return 0;
}