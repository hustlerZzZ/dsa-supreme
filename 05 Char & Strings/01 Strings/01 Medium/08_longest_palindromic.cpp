#include <bits/stdc++.h>
using namespace std;

// L.C : 5. Longest Palindromic Substring

bool isPalindrome(string &s, int start, int end)
{
    while (end > start)
    {
        if (s[start] != s[end])
            return false;
        start++, end--;
    }

    return true;
}

// T.C : O(n * n * n)
// T.C : O(1)
string longestPalindrome(string s)
{
    string ans = "";

    for (int i = 0; i < s.size(); i++)
        for (int j = i; j < s.size(); j++)
            if (isPalindrome(s, i, j))
            {
                string subStr = s.substr(i, j - i + 1);
                ans = subStr.size() > ans.size() ? subStr : ans;
            }

    return ans;
}

int main()
{
    cout << longestPalindrome("babad");
    return 0;
}