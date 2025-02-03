#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr, int currIndex)
{
    // base case
    if (arr.size() - 1 == currIndex)
        return true;

    bool currAns = false;
    bool recursionAns = false;

    if (arr[currIndex + 1] > arr[currIndex])
        currAns = true;

    recursionAns = checkSorted(arr, currIndex + 1);

    return currAns && recursionAns;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    cout << "Array is sorted or not : " << checkSorted(arr, 0);

    return 0;
}