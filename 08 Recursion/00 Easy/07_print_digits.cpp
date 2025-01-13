#include <bits/stdc++.h>
using namespace std;

void printDigits(int n)
{
    if (n == 0)
        return;

    printDigits(n / 10);
    int digit = n % 10;
    cout << digit << " ";
}

int main()
{
    int n;
    cout << "Enter your number : " << endl;
    cin >> n;

    printDigits(n);

    return 0;
}