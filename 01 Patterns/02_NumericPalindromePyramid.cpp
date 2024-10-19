#include <iostream>
using namespace std;

void numericPalindrome(int n)
{
    for (int row = 0; row < n; row++)
    {
        // For printing space
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        // For printing numbers
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }

        // For right triangle
        for (int col = row; col > 0; col--)
        {
            cout << col;
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    numericPalindrome(n);

    return 0;
}
