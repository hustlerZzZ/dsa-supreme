#include <bits/stdc++.h>
using namespace std;

void solve(int *arr, int size)
{
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
}

int main()
{
    int arr[] = {10, 20, 30};
    int size = 6;

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    solve(arr, size);

    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

    return 0;
}