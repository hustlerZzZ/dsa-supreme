#include <bits/stdc++.h>
using namespace std;

// T.C : O(n)
// S.C : O(n)
bool isPalindrome(string s, int start, int end)
{
    if (start >= end)
        return true;

    if (s[start] != s[end])
        return false;

    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    cout << isPalindrome("nitin", 0, 5);

    return 0;
}