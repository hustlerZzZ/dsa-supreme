#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

using namespace std;

bool isPossible(vector<int> arr, int n, int m, int sol)
{
    int pageSum = 0;
    int c = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sol)
        {
            return false;
        }
        if (pageSum + arr[i] > sol)
        {
            c++;
            pageSum = arr[i];
            if (c > m)
                return false;
        }
        else
        {
            pageSum += arr[i];
        }
    }

    return true;
}

int findPages(vector<int> arr, int m)
{
    int n = arr.size();

    if (n < m)
        return -1;

    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while (end >= start)
    {
        int mid = (start + end) >> 1;

        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return ans;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;

    cout << findPages(arr, k);

    return 0;
}
