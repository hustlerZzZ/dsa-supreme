#include <iostream>
#include <cmath>

using namespace std;

int kThBit(int N, int K)
{
    int count = 0;
    int result = 0;
    int i = 0;
    while (N > 0)
    {
        int bit = N & 1;
        if (count++ == K)
            bit = 1;
        result = bit * pow(2, i++) + result;
        N /= 2;
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    int result = kThBit(n, 2);

    cout << "Your result is : " << result << endl;

    return 0;
}
