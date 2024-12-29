#include <bits/stdc++.h>
using namespace std;

int gcd(int A, int B)
{
    if (A == 0)
        return B;
    if (B == 0)
        return B;

    while (A > 0 && B > 0)
    {
        if (A > B)
        {
            A = A - B;
        }
        else
        {
            B = B - A;
        }
    }

    return A == 0 ? B : A;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b);

    return 0;
}