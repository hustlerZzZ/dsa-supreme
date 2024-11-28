#include <bits/stdc++.h>
using namespace std;

// T.C : O(n)
// S.C : O(1)
void replaceChar(char originalChar, char newChar, char arr[], int size)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == originalChar)
            arr[i] = newChar;
}

int main()
{
    char arr[100];

    cout << "Enter your char array : " << endl;

    cin >> arr;

    replaceChar('@', ' ', arr, 1000);

    cout << arr << endl;

    return 0;
}