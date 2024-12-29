#include <bits/stdc++.h>
using namespace std;

long long int powMod(long long int x, long long int n, long long int M)
{
    long long int ans = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            ans = (ans * x) % M;
        }
        x = (x * x) % M;
        n = n >> 1;
    }

    return ans % M;
}

int main()
{
    long long int x, y, M;
    cin >> x >> y >> M;

    cout << powMod(x, y, M);
    return 0;
}