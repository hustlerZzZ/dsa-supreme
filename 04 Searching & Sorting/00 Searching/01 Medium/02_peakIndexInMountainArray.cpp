#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 852. Peak Index in a Mountain Array

// T.C : O(n)
// S.C : O(1)
int peakIndexInMountainArrayUsingLinearSearch(vector<int> &arr)
{
    int max = INT_MIN;
    int maxIndex = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }
    }

    return maxIndex;
}

// T.C : O(logn)
// S.C : O(1)
int peakIndexInMountainArrayUsingBinarySearch(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ansIndex = -1;

    while (end > start)
    {
        if (arr[mid] < arr[mid + 1]) // move right
            start = mid + 1;
        else // move left
        {
            ansIndex = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ansIndex;
}

int main()
{
    vector<int> mountain = {0, 2, 1, 0};

    int ans = peakIndexInMountainArrayUsingBinarySearch(mountain);

    cout << "The peak of the mountain is at : " << ans << endl;

    return 0;
}
