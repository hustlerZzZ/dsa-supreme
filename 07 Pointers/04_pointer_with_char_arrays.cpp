#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[] = {'P', 'r', 'i', 'n', 'c', 'e', '\0'};
    char *ptr = arr;

    cout << arr << endl;
    cout << "Base address : " << &arr << endl;
    cout << ptr << endl;
    cout << *ptr << endl;

    return 0;
}