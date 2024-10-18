#include <iostream>
#include <cmath>

using namespace std;

int binaryToDecimalDivision(int num)
{
    int result = 0;
    int i = 0;

    while (num > 0)
    {
        int bit = num % 10;
        result = bit * pow(2, i++) + result;
        num /= 10;
    }

    return result;
}

int binaryToDecimalBitwise(int num)
{
    int result = 0;
    int i = 0;

    while (num > 0)
    {
        int bit = num & 1;
        result += bit << i;
        num >>= 1;
        i++;
    }

    cout << result;

    return result;
}

int main()
{
    int n;

    cout << "Enter your binary number which you want to convert in decimal : " << endl;
    cin >> n;

    int result = binaryToDecimalBitwise(n);
    cout << "Your number in deciaml is : " << result << endl;

    return 0;
}
