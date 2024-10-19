#include <iostream>
using namespace std;

void hollowPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || col == 0 || row == n - 1 || col == row)
            {

                cout << col + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    hollowPyramid(n);

    return 0;
}
