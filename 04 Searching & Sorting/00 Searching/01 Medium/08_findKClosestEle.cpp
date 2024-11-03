#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leetcode : 658. Find K Closest Elements

// T.C : O(n-k)
// S.C : O(1) used k size to return the ans
vector<int> findClosestElementsUsingTwoPointer(vector<int> &arr, int k, int x)
{
    int low = 0, high = arr.size() - 1;

    while (high - low >= k)
    {
        if (x - arr[low] > arr[high] - x)
            low++;
        else
            high--;
    }

    // vector<int> ans;

    // for (int i = low; i <= high; i++)
    // {
    //     ans.push_back(arr[i]);
    // }

    return vector<int>(arr.begin() + low, arr.begin() + high + 1);
}

int lowerBound(vector<int> &arr, int x)
{
    int s = 0, e = arr.size() - 1;
    int ans = -1;

    while (e >= s)
    {
        int m = s + (e - s) / 2;
        if (arr[m] >= x)
        {
            ans = m;
            e = m - 1;
        }
        else if (x > arr[m])
            s = m + 1;
        else
            e = m - 1;
    }

    return ans;
}

vector<int> findClosestElementsUsingBS(vector<int> &arr, int k, int x)
{
    int h = lowerBound(arr, x);
    int l = h - 1;

    while (k--)
    {
        if (l < 0)
            h++;
        else if (h >= arr.size())
            l--;
        else if (x - arr[l] > arr[h] - x)
            h++;
        else
            l--;
    }

    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4, x = 3;

    vector<int> res = findClosestElementsUsingBS(arr, k, x);

    for (auto &&i : res)
    {
        cout << i << " ";
    }

    return 0;
}
