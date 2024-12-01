#include <bits/stdc++.h>
using namespace std;

// L.C : 647. Palindromic Substrings

// T.C : O(n^2)
// S.C : O(1)
// finding all substrings and checking if it is a palindrome
// int countSubstringsBruteforce(string s)
// {
// }

// This function returns the count of palindromic substrings using i and j as center and expanding around it in every direction
int expandAroundCenter(string s, int i, int j)
{
    int count = 0;

    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--, j++;
    }

    return count;
}

// T.C : O(n^2)
// S.C : O(1)
int countSubstrings(string s)
{
    int totalCount = 0;

    for (int center = 0; center < s.length(); center++)
    {
        // odd
        int i = center;
        int j = center;

        int oddPalindromicSubString = expandAroundCenter(s, i, j);

        // even
        i = center;
        j = center + 1;
        int evenPalindromicSubString = expandAroundCenter(s, i, j);

        totalCount = totalCount + oddPalindromicSubString + evenPalindromicSubString;
    }

    return totalCount;
}

int main()
{
    string s = "abc";

    cout << countSubstrings(s);

    return 0;
}