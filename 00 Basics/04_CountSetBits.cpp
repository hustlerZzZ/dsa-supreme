#include <iostream>
#include <cmath>
using namespace std;

int countSetBits(int n)
{
    int count = 0;

    while (n > 0)
    {
        int bit = n % 2;
        if (bit == 1)
            count++;
        n = n / 2;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter your number : " << endl;
    cin >> n;

    int result = countSetBits(n);
    cout << "Total set bits in " << n << " is :" << result;

    return 0;
}
