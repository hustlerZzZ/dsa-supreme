#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int n, int k, int sol)
{
    long long timeSum = 0;
    int c = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sol)
            return false;
        if (arr[i] + timeSum > sol)
        {
            c++;
            timeSum = arr[i];
            if (c > k)
                return false;
        }
        else
        {
            timeSum += arr[i];
        }
    }

    return true;
}

long long minTime(vector<int> arr, int k)
{
    int n = arr.size();
    long long start = 0, end = 0;

    for (int i = 0; i < n; i++)
    {
        end += arr[i];
    }

    long long ans = -1;

    while (end >= start)
    {
        long long mid = start + (end - start) / 2;

        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40};
    int k = 2;

    cout << minTime(arr, k);

    return 0;
}