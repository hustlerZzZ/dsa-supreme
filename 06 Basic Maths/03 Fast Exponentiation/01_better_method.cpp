#include <bits/stdc++.h>
using namespace std;

// T.C : O(logb)
int fastExponentiation(int a, int b)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // odd
            ans = ans * a;
        }
        a = a * a;
        b = b >> 1; // Right shift (b = b / 2)
    }

    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << fastExponentiation(a, b);

    return 0;
}