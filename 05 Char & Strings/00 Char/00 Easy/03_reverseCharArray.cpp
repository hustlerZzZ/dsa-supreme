#include <bits/stdc++.h>
using namespace std;

// T.C : O(n)
// S.C : O(1)
void reverseCharArray(char arr[], int size)
{
    int start = 0, end = size - 1;

    while (end > start)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

int main()
{
    int n;
    cin >> n;
    char arr[n];

    cout << "Enter your char array of " << n << " size " << " : " << endl;

    cin >> arr;

    reverseCharArray(arr, n);

    cout << arr;

    return 0;
}