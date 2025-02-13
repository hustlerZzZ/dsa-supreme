#include <bits/stdc++.h>
using namespace std;

// T.C : O(n)
// S.C : O(1)
void upperToLower(char arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = arr[i] - 'A' + 'a';
}

void lowerToUpper(char arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = arr[i] + 'A' - 'a';
}

int main()
{
    char arr[100];

    cout << "Enter your char array : " << endl;

    cin >> arr;

    upperToLower(arr, 1000);
    cout << arr << endl;

    lowerToUpper(arr, 1000);
    cout << arr << endl;

    return 0;
}