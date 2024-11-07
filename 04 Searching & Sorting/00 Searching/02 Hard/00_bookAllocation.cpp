#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

using namespace std;

// GFG : Allocate Minimum Pages (Medium)

bool isPossibleSolution(vector<int> &arr, int n, int students, int sol)
{
    int pageSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sol)
        {
            return false;
        }
        if (arr[i] + pageSum > sol)
        {
            c++;
            pageSum = arr[i];
            if (c > students)
                return false;
        }
        else
        {
            pageSum += arr[i];
        }
    }

    return true;
}

int betterSolution(vector<int> &arr, int students)
{
    int n = arr.size();
    if (students > n)
        return -1;

    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while (end >= start)
    {
        int mid = start + (end - start) / 2;

        if (isPossibleSolution(arr, n, students, mid))
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

// int bruteForce(vector<int> &arr, int target) {}

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;

    int res = betterSolution(arr, k);

    cout << res << endl;

    return 0;
}
