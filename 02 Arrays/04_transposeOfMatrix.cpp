#include <iostream>
using namespace std;

// transpose :
// row -> col
// col -> row

void transpose(int arr[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row < col)
                swap(arr[row][col], arr[col][row]);
        }

        cout << endl;
    }
}

int main()
{
    // Declaration and initialization
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90},
    };

    cout << "Before transpose : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }

        cout << endl;
    }

    cout << endl;

    transpose(arr);

    cout << "Afer transpose : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << arr[row][col] << " ";
        }

        cout << endl;
    }

    return 0;
}
