#include <bits/stdc++.h>
using namespace std;

// Palindrome : Which reads same from both the ends

// T.C : O(n)
// S.C : O(1)
bool palindrome(char arr[], int size)
{
    int start = 0, end = size - 1;

    while (end > start)
    {
        if (arr[start] != arr[end])
            return false;
        start++, end--;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    char arr[n];

    cout << "Enter your char array of " << n << " size " << " : " << endl;

    cin >> arr;

    palindrome(arr, n) ? cout << "It is a Palindrome" : cout << "Not a palindrome";

    return 0;
}