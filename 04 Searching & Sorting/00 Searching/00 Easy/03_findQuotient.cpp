/*

Givern two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor
without the use of any " / " and " % " operators.

Ex : Input : dividend = 10, divisor = 2
    Output: 5
    Explanation : 10 / 2 = 5

    Input : dividend = 10, divisor = 3
    Output: 3
    Explanation : 10 / 3 = 3.333333.... which is truncated to 3

    Input : dividend = 10, divisor = -2
    Output: -5
    Explanation : 10 / -2 = -5

*/

// Divisor -> Jisse divide krna h
// Dividerd -> Jisko divide krna h
// Quotient -> Kitni baar m divide hua
// Remainder -> Jo bach gya

// Divisor * Quotient + Remainder = Dividend

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// T.C : O(logn)
// S.C : O(1)
int findQuotient(int dividend, int divisor)
{
    int start = 0, end = dividend;
    int mid = start + ((end - start) >> 1);
    int ans = -1;

    while (end >= start)
    {
        if (divisor * mid == dividend)
        {
            return mid;
        }
        else if ((divisor * mid) <= dividend)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) >> 1;
    }

    return ans;
}

int main()
{
    int dividend, divisor;

    cout << "Enter the dividend : " << endl;
    cin >> dividend;
    cout << "Enter the divisor : " << endl;
    cin >> divisor;

    int quotient = findQuotient(abs(dividend), abs(divisor));

    if (dividend < 0 || divisor < 0)
        quotient *= -1;

    cout << "The quotient is : " << quotient << endl;

    return 0;
}
