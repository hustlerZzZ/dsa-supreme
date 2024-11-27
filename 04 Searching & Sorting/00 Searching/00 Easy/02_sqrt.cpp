#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leetcode : 69. Sqrt(x)

// T.C : O(logn)
// S.C : O(1)
double mySqrtUsingBinarySearch(int x)
{
    int start = 0, end = x;
    long long int mid = start + (end - start) / 2;
    int ans = -1;

    while (end >= start)
    {
        long long int product = mid * mid;
        if (product == x)
            return mid;
        else if (product < x)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main()
{
    int x = 54;

    double res = mySqrtUsingBinarySearch(x);

    cout << "The sqrt is : " << res << endl;

    return 0;
}
