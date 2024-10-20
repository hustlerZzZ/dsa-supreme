#include <iostream>
using namespace std;

void swapNumbersUsingTempVariable(int a, int b)
{
    int temp = b;
    b = a;
    a = temp;

    cout << "The value of a : " << a << endl;
    cout << "The value of b : " << b << endl;
}

void swapNumbersUsingPlusMinus(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "The value of a : " << a << endl;
    cout << "The value of b : " << b << endl;
}

void swapNumbersUsingXOR(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "The value of a : " << a << endl;
    cout << "The value of b : " << b << endl;
}

int main()
{
    int a, b;
    cout << "Enter the value of a :" << endl;
    cin >> a;

    cout << "Enter the value of b :" << endl;
    cin >> b;

    swapNumbersUsingXOR(a, b);

    return 0;
}
