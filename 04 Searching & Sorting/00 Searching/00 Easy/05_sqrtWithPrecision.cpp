#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// T.C : O(logn)
// S.C : O(1)
int mySqrt(int x)
{
    int start = 0, end = x;
    long long int mid = start + (end - start) / 2;
    int ans = -1;

    while (end >= start)
    {
        long long int product = mid * mid;

        if (product <= x)
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

// T.C : O(precision * 10) -> O(precision)
// T.C : O(1)
double myPrecisionSqrt(int n)
{
    double sqrt = mySqrt(n); // TC: O(logn) + O(precision)
    int precision = 9;
    double step = 0.1;

    while (precision--)
    {
        double j = sqrt;
        while (j * j <= n)
        {
            // store & compute
            sqrt = j;
            j += step;
        }
        // after this while loop i got 1 precision ans.
        step /= 10;
    }

    return sqrt;
}

// T.C : O(logn)
// S.C : O(1)
double BinarySearchWithPrecision(int n)
{
    double start = 0;
    double end = n;
    double ans = -1;

    while ((end - start) > 0.000001)
    {
        double mid = (start + end) / 2;
        double sqr = mid * mid;

        if (sqr <= n)
        {
            ans = mid;
            start = mid;
        }
        else
        {
            end = mid;
        }
    }

    return ans;
}

int main()
{
    int x = 63;

    double res = BinarySearchWithPrecision(x);

    cout << "The sqrt is : " << res << endl;
    // cout only prints 5 precision
    printf("Precsion sqrt: %.9f\n", res);
    return 0;
}
