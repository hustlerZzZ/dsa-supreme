#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinaryDivisionMethod(int num)
{
    int result = 0;
    int i = 0;

    while (num > 0)
    {
        int bit = num % 2;
        result = bit * pow(10, i++) + result;
        num /= 2;
    }

    return result;
}

int decimalToBinaryBitWiseMethod(int num)
{
    int result = 0;
    int i = 0;

    while (num > 0)
    {
        int bit = num & 1;
        result = bit * pow(10, i++) + result;
        num = num >> 1;
    }

    return result;
}

int main()
{
    int n;

    cout << "Enter your number which you want to convert in binary : " << endl;
    cin >> n;

    int result = decimalToBinaryBitWiseMethod(n);
    cout << "Your number in binary is : " << result << endl;

    return 0;
}
