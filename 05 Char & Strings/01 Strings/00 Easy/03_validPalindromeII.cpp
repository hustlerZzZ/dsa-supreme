#include <bits/stdc++.h>
using namespace std;

// L.C : 680. Valid Palindrome II

bool checkPalindrome(string s, int start, int end)
{
    while (end >= start)
    {
        if (s[start] != s[end])
            return false;
        start++, end--;
    }

    return true;
}

// T.C : O(n)
// S.C : O(1)
bool validPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (end >= start)
    {
        if (s[start] == s[end])
            start++, end--;
        else
        {
            // 2 options h delete ith index wala
            bool ans1 = checkPalindrome(s, start + 1, end);
            // delete jth index wala
            bool ans2 = checkPalindrome(s, start, end - 1);

            return ans1 || ans2;
        }
    }

    return true;
}

int main()
{
    string s = "abca";

    cout << validPalindrome(s);

    return 0;
}