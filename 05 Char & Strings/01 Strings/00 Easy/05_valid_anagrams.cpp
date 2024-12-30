#include <bits/stdc++.h>
using namespace std;

// L.C : 242. Valid Anagram

// T.C : O(nlogn)
// S.C : O(1)
// 1. Sorting
bool isAnagramSort(string s, string t)
{
    if (s.length() != t.length())
        return false;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    for (int i = 0; i < s.length(); i++)
        if (s[i] != t[i])
            return false;

    return true;
}

// T.C : O(s + t)
// S.C : O(1)
// Counting : No. of respective char in t = char in s
bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    int ascii[256] = {0};

    for (int i = 0; i < s.length(); i++)
        ascii[s[i]]++;

    for (int i = 0; i < t.length(); i++)
        if (ascii[t[i]] > 0)
            ascii[t[i]]--;
        else
            return false;

    return true;
}

int main()
{
    cout << isAnagram("aacc", "ccac");
    return 0;
}