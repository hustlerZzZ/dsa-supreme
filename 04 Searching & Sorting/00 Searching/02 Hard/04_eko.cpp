#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPossible(int arr[], int m, int n, int sol)
{
    int wood = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sol)
            wood += arr[i] - sol;
    }

    return wood >= m;
}

int maxHeight(int arr[], int m, int n)
{
    int ans = -1;
    sort(arr, arr + n);
    int start = 0, end = arr[n - 1];

    while (end >= start)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, m, n, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return ans;
}

signed main()
{
    int n, m;
    cin >> n >> m;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << maxHeight(arr, m, n);
}