#include <bits/stdc++.h>
using namespace std;

// T.C : (n^2)
// S.C : (n)
void quickSort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return;
    int pivot = end;
    int i = start - 1;
    int j = start;

    while (j < pivot)
    {
        if (arr[i] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }

    i++;
    // i is the right position for the pivot element
    swap(arr[i], arr[pivot]);

    quickSort(arr, start, i - 1);
    quickSort(arr, i + 1, end);
}

int main()
{
    vector<int> arr = {7, 2, 1, 8, 6, 3, 5, 4};

    return 0;
}