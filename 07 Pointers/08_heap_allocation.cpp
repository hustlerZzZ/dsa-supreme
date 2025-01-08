#include <bits/stdc++.h>
using namespace std;

int main()
{
    // integer -> stack memory
    int a = 5;
    cout << a << endl;

    // integer -> heap memory
    int *p = new int;
    *p = 5;

    cout << *p << endl;

    // deallocation
    delete p; // freeing memory in heap

    // array -> stack memory
    int arr[5];
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    // array -> heap memory
    int *ptr = new int[5];
    cout << *(ptr + 0) << " " << *(ptr + 1) << " " << *(ptr + 2) << endl;

    // 2D array -> stack memory
    int arr2D[2][2];

    // 2D array -> heap memory
    // 4 -> row count
    // 3 -> col count
    int **arr_ptr = new int *[4];

    for (int i = 0; i < 10; i++)
    {
        // for every pointer create a 1D array
        arr_ptr[i] = new int[3];
    }

    return 0;
}