#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5; // 4 byte
    int *ptr = &a;

    cout << sizeof(ptr) << endl;

    char ch = 'a'; // 1 byte
    char *cptr = &ch;

    cout << sizeof(cptr) << endl;

    long ln = 1040; // 8 byte
    long *lptr = &ln;

    cout << sizeof(lptr) << endl;

    return 0;
}