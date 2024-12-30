#include <bits/stdc++.h>
using namespace std;

// Sieve of Eratosthens (unoptimized)
// T.C : O(n) + O(nLog(nLogn))
int isPrimeSieveUnoptimized(int n)
{
    if (n == 0)
        return 0;

    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (sieve[i])
        {
            int j = i * 2;
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < n + 1; i++)
        if (sieve[i])
            count++;

    return count;
}

// Sieve of Eratosthens (optimized)
// T.C : O(n) + O(nLog(Logn))
int isPrimeSieveOptimized(int n)
{
    if (n == 0)
        return 0;

    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    // 2. (Optimization)
    // for (int i = 2; i <= n; i++)
    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {
            int j = i * i; // 1. (Optimzation) int j = i * 2;
            // As j also covers the elements which are already marked as false. So we make sure it starts from its sqr.
            // first unmarked number would be i*i, as others have been marked by 2 to (i - 1)
            while (j <= n)
            {
                sieve[j] = false;
                j += i;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < n + 1; i++)
        if (sieve[i])
            count++;

    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << isPrimeSieveOptimized(n);

    return 0;
}