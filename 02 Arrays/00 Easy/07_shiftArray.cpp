#include <iostream>
#include <vector>

using namespace std;

void shiftArray(vector<int> &arr, int shift)
{
    int size = arr.size();
    int finalShift = shift % size;

    if (finalShift == 0)
    {
        return;
    }

    // Step 1 : Store last n (finalShift) elements in a temp array
    int temp[10000];
    int index = 0;
    for (int i = size - finalShift; i < size; i++)
    {
        temp[index++] = arr[i];
    }

    // Step 2 : Shift all elements by n (finalShift) places
    for (int i = size - 1; i >= 0; i--)
    {
        if (i - size >= 0)
            arr[i] = arr[i - finalShift];
    }

    // Step 3 : Copy temp array into original array starting
    for (int i = 0; i < finalShift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60};

    cout << "Before :" << endl;

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    shiftArray(arr, 2);

    cout << "After :" << endl;

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}