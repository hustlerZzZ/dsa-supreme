#include <bits/stdc++.h>
using namespace std;

// Sieve of Eratosthens
// T.C : O(n) + O(nLog(nLogn))
int isPrimeSieve(int n)
{
    if (n == 0)
        return 0;

    vector<bool> prime(n, true); // all are prime marked already
    prime[0] = prime[1] = false;

    int ans = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            ans++;

            int j = 2 * i;
            while (j < n)
            {
                prime[j] = false;
                j += i;
            }
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << isPrimeSieve(n);

    return 0;
}