#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e, int mid)
{
    // create left and right arrays
    int leftLength = mid - s + 1;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    // fill or copy the left and right arrays
    // copy original array -> values
    // original array ka starting index

    int index = s;

    // copying into left wala
    for (int i = 0; i < leftLength; i++)
    {
        leftArr[i] = arr[index];
        index++;
    }

    index = mid + 1;
    // copying into right wala
    for (int i = 0; i < rightLength; i++)
    {
        rightArr[i] = arr[index];
        index++;
    }

    // merge logic
    int i = 0;
    int j = 0;
    int mainArrayIndex = s;

    while (i < leftLength && j < rightLength)
    {
        if (leftArr[i] < rightArr[j])
        {
            arr[mainArrayIndex] = leftArr[i];
            i++;
            mainArrayIndex++;
        }
        else
        {
            arr[mainArrayIndex] = rightArr[j];
            j++;
            mainArrayIndex++;
        }
    }

    // i have to handle the 2 cases
    while (i < leftLength)
    {
        arr[mainArrayIndex] = leftArr[i];
        i++;
        mainArrayIndex++;
    }

    while (j < rightLength)
    {
        arr[mainArrayIndex] = rightArr[j];
        j++;
        mainArrayIndex++;
    }

    // delete heap memory
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    // left part recursion se solve krwao
    mergeSort(arr, s, mid);

    // right part recursion se solve krwao
    mergeSort(arr, mid + 1, e);

    // dono parts ko merge krdo
    merge(arr, s, e, mid);
}

int main()
{
    int arr[] = {10, 80, 110, 90, 50, 30, 40, 20};
    int size = 8;
    int s = 0;
    int e = size - 1;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    mergeSort(arr, s, e);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}