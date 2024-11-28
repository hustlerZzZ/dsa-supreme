#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

// Leetcode : 875. Koko Eating Bananas

bool isPossible(vector<int> piles, int h, int sol)
{
    int totalTime = 0;

    for (int i = 0; i < piles.size(); i++)
    {
        totalTime += ceil((double)piles[i] / sol);
    }

    if (totalTime <= h)
        return true;
    else
        return false;
}

// T.C : O(Log(Max(Piles)) * O(n)) => O(n*log(max(piles)))
// S.C : O(1)
int minEatingSpeed(vector<int> &piles, int h)
{
    int start = 1, end = *max_element(piles.begin(), piles.end());
    int ans = 1;

    while (end >= start)
    {
        int mid = (start + end) / 2;
        if (isPossible(piles, h, mid))
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
    vector<int> arr = {3, 6, 7, 11};
    int k = 8;

    cout << minEatingSpeed(arr, k);

    return 0;
}
