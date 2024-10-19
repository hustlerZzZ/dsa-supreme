#include <iostream>
using namespace std;

void hollowReversePyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0 || col == 0 || col == n - row - 1)
                cout << col + 1 << " ";
            else
                cout << "  ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    hollowReversePyramid(n);

    return 0;
}
