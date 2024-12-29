#include <bits/stdc++.h>
using namespace std;

// L.C : 204. Count Primes

// Naive Approach
// T.c : O(n^2)
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

// Sqrt Approach
// T.c : O(sqrt(n))
bool isPrimeSqrt(int n)
{
    if (n <= 1)
        return false;
    int sqrtN = sqrt(n);
    for (int i = 2; i < sqrtN; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int countPrimes(int n)
{
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
            c++;
    }

    return c;
}

int main()
{
    int n;
    cin >> n;

    cout << countPrimes(n);

    return 0;
}
