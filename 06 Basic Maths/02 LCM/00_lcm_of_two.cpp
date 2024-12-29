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

int lcm(int A, int B)
{
    int gcd_of_two = gcd(A, B);
    int lcm = (A * B) / gcd_of_two;
    return lcm;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << lcm(a, b);

    return 0;
}