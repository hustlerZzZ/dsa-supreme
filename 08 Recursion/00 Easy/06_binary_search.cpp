#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int s, int e, int target)
{
    if (s > e)
        return -1;

    int mid = (s + e) / 2;

    if (arr[mid] == target)
        return mid;

    if (arr[mid] < target)
        return binarySearch(arr, size, mid + 1, e, target);

    return binarySearch(arr, size, s, mid - 1, target);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int target = 50;
    int size = 7;

    cout << binarySearch(arr, size, 0, size - 1, target);

    return 0;
}