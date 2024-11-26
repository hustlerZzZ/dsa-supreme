#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> stalls, int k, int sol)
{
    // can we place k cows, with at least mid
    int c = 1;
    int pos = stalls[0];

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= sol)
        {
            c++;
            pos = stalls[i]; // one more cow has been placed
        }
        if (c == k)
            return true;
    }

    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    int n = stalls.size();
    sort(stalls.begin(), stalls.end());

    int start = 0, end = stalls[n - 1] - stalls[0];
    int ans = -1;

    while (end >= start)
    {
        int mid = (start + end) >> 1;
        if (isPossible(stalls, k, mid))
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

int main()
{
    vector<int> arr = {1, 2, 4, 8, 9};
    int k = 3;

    cout << aggressiveCows(arr, k);

    return 0;
}