#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    cout << arr << endl;
    cout << *(arr + 1) << endl;
    cout << &arr << endl;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;

    return 0;
}