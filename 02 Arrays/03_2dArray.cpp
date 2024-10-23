#include <iostream>
using namespace std;

int main()
{
    // Declaration and initialization
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90},
    };

    // Accessing
    cout << arr[1][1] << endl;

    // row-wise traversal
    cout << "Row wise traversal : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }

        cout << endl;
    }

    cout << endl;

    // col-wise traversal
    cout << "Col wise traversal : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[col][row] << " ";
        }

        cout << endl;
    }

    cout << endl;

    // diagonal traversal
    cout << "Principal Diagonal wise traversal : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == col)
                cout << arr[col][row] << " ";
            else
                cout << 0 << " ";
        }

        cout << endl;
    }

    cout << endl;

    cout << "IInd Diagonal wise traversal : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (col == 2 - row)
                cout << arr[col][row] << " ";
            else
                cout << 0 << " ";
        }

        cout << endl;
    }

    return 0;
}
