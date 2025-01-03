#include <bits/stdc++.h>
using namespace std;

// L.C : 28. Find the Index of the First Occurrence in a String

// Method 1 : using find of c++
// T.C : O(n+m)
// S.C : O(1) (excluding input) or 𝑂(𝑛+𝑚)(including input)
int strStr(string haystack, string needle)
{
    int index = haystack.find(needle);
    return index;
}

// Method 2 : sliding window
// T.C : O(n*m)
// S.C : O(m)
int strStrSlidingWindow(string haystack, string needle)
{
    int start = 0, end = needle.length() - 1;
    int index = -1;

    while (haystack.length() > end)
    {
        string subStr = haystack.substr(start, end - start + 1);
        if (subStr == needle)
        {
            index = start;
            break;
        }
        start++, end++;
    }

    return index;
}

// T.C : O(n*m)
// S.C : O(1)
int strStrSlidingWindowOptimized(string haystack, string needle)
{
    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (needle[j] != haystack[i + j])
                break;
            if (j == m - 1)
                return i;
        }
    }

    return -1;
}

int main()
{
    cout << strStrSlidingWindowOptimized("leetbutsad", "sad");
    return 0;
}