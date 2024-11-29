#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100];

    cout << "Enter your name : " << endl;
    cin >> arr;

    char arr2[100];
    cout << "Enter your name : " << endl;
    cin >> arr2;

    cout << strcat(arr, arr2) << endl;

    cout << strlen(arr);

    return 0;
}