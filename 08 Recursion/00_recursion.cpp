#include <bits/stdc++.h>
using namespace std;

int getFactorial(int n)
{
    // base case
    if (n == 0 || n == 1)
        return 1;

    // recursive call (breaking of big problem into smaller ones)
    int finalAns = n * getFactorial(n - 1);
    return finalAns;
    // processing
}

int main()
{
    int n;
    cout << "Enter the value of n :";
    cin >> n;

    int ans = getFactorial(n);

    cout << "Factorial of " << n << " is : " << ans << endl;

    return 0;
}