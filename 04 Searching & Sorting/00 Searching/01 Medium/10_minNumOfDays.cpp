#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

// Leetcode : 1482. Minimum Number of Days to Make m Bouquets

bool isPossible(vector<int> &bloomDay, int m, int k, int sol)
{
    int flower = 0;
    int c = 0;

    for (int i = 0; i < bloomDay.size(); i++)
    {
        // check wheather the ith flower is bloomed or not
        if (bloomDay[i] <= sol)
        {
            c++;
        }
        // not bloomed case
        if (bloomDay[i] > sol)
        {
            c = 0;
        }
        if (c == k)
        {
            m--;
            c = 0;
            if (m == 0)
                break;
        }
    }

    return m == 0;
}

// T.C : O()
// S.C : O(1)
int minDays(vector<int> &bloomDay, int m, int k)
{
    long long int requiremt = (long long int)m * (long long int)k;
    if (bloomDay.size() < requiremt)
        return -1;

    int start = *min_element(bloomDay.begin(), bloomDay.end());
    int end = *max_element(bloomDay.begin(), bloomDay.end());

    int ans = end;

    while (end >= start)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(bloomDay, m, k, mid))
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
    vector<int> arr = {1, 10, 3, 10, 2};
    int m = 3;
    int k = 1;

    cout << minDays(arr, m, k);

    return 0;
}
