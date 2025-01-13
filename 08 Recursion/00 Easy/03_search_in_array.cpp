#include <bits/stdc++.h>
using namespace std;

bool searchInArray(int arr[], int size, int index, int target)
{
    if (arr[index] == target)
        return true;

    if (index == size)
        return false;

    bool ans = searchInArray(arr, size, index + 1, target);

    return ans;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int target = 50;

    cout << searchInArray(arr, size, index, target);

    return 0;
}