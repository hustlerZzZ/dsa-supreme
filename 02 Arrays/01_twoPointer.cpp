#include <iostream>
using namespace std;

void printHighLowUsingTwoPointer(int arr[], int size)
{
    int low = 0, high = size - 1;

    while (high > low)
    {
        cout << arr[low] << " " << arr[high] << " ";
        low++, high--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    printHighLowUsingTwoPointer(arr, size);

    return 0;
}
