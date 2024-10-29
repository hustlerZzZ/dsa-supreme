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

    double sqrtAns = (double)ans;

    // precision upto how many digits
    int precision;
    cout << "Enter the precision upto how many digits : " << endl;
    cin >> precision;

    double factor = 1;
    double finalAns = sqrtAns;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10.0;

        for (int j = 0; j < 10; j++)
        {
            double toAdd = j * factor;
            double newAns = sqrtAns + toAdd;
            if (newAns * newAns < x)
            {
                finalAns = sqrtAns + toAdd;
            }
            else
            {
                break;
            }
        }
        sqrtAns = finalAns;
    }

    return finalAns;
}

int main()
{
    int x = 54;

    double res = mySqrtUsingBinarySearch(x);

    cout << "The sqrt is : " << res << endl;

    return 0;
}
