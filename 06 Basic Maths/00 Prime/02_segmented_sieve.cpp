#include <bits/stdc++.h>
using namespace std;

vector<bool> Sieve(int n)
{
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {
            int j = i * i;
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }

    return sieve;
}

vector<bool> segmented_sieve(int l, int r)
{
    // get me prime array, i will use it to mark seg sieve.
    vector<bool> sieve = Sieve(sqrt(r));
    vector<int> basePrimes;

    for (int i = 0; i < sieve.size(); i++)
        if (sieve[i])
            basePrimes.push_back(i);

    vector<bool> segSieve(r - l + 1, true);
    if (l == 1 || l == 0)
        segSieve[l] = false;

    for (auto prime : basePrimes)
    {
        int first_mul = (l / prime) * prime;
        if (first_mul < l)
            first_mul += prime;

        int j = max(first_mul, prime * prime);

        while (j <= r)
        {
            segSieve[j - l] = false;
            j += prime;
        }
    }

    return segSieve;
}

int main()
{
    int l, r;
    cin >> l >> r;

    vector<bool> seg = segmented_sieve(l, r);

    for (int i = 0; i < seg.size(); i++)
    {
        if (seg[i])
        {
            cout << i + l << " ";
        }
    }

    return 0;
}