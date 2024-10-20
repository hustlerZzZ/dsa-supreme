#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int low = 0, high = size - 1;

    while (high > low)
    {
        swap(arr[low], arr[high]);
        low++, high--;
    }

    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    reverseArray(arr, size);

    return 0;
}