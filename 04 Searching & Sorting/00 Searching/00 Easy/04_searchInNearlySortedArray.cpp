/*

Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent positions, i.e. arr[i] may be present at arr[i+1] or arr[i-1]
i.e. arr[i] can only be swapped with either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

Contraint : Search the element in O(logn)

Ex : Input : arr[] = {10, 3, 40, 20, 50, 80, 70}, key = 40
     Output: 2
     Explanation : Output is index of 40 in the given array i.e. 2

     Input : arr[] = {10, 3, 40, 20, 50, 80, 70}, key = 90
     Output: -1
     Explanation : -1 is returned to indicate the element is not present

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearchInNearlySorted(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;

    while (e >= s)
    {
        if (arr[mid] == key)
            return mid;
        else if ((arr[mid - 1] == key))
            return mid - 1;
        else if (arr[mid + 1] == key)
            return mid + 1;
        else if (arr[mid] < key)
            e = mid - 2;
        else
            s = mid + 2;

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {10, 3, 40, 20, 50, 80, 70};
    int size = 7;
    int key;

    cout << "Enter the key : " << endl;
    cin >> key;

    int res = binarySearchInNearlySorted(arr, size, key);

    cout << "The index is : " << res << endl;

    return 0;
}
