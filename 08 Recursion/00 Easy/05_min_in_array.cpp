#include <bits/stdc++.h>
using namespace std;

void minInArray(int arr[], int size, int index, int &ans)
{
    if (index == size)
        return;

    if (arr[index] < ans)
        ans = arr[index];

    minInArray(arr, size, index + 1, ans);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;
    int ans = INT_MAX;

    minInArray(arr, size, index, ans);

    cout << ans;

    return 0;
}