#include <bits/stdc++.h>
using namespace std;

// L.C : 14. Longest Common Prefix

// T.C : O(m * n)
// S.C : O(m)
// Unoptimized Approach
string longestCommonPrefix(vector<string> &strs)
{
    string str = "";
    int i = 0;

    while (true)
    {
        char curr_ch = 0;

        for (auto str : strs)
        {
            if (i >= str.size())
            {
                // Out of bound
                curr_ch = 0;
                break;
            }
            // just started
            if (curr_ch == 0)
            {
                curr_ch = str[i];
            }
            else if (str[i] != curr_ch)
            {
                curr_ch = 0;
                break;
            }
        }

        if (curr_ch == 0)
        {
            break;
        }

        str.push_back(curr_ch);
        i++;
    }

    return str;
}

// T.C : O(nlogn)
// S.C : O(m)
// Optimized Approach
string longestCommonPrefixOptimized(vector<string> &strs)
{
    string str = "";
    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs[strs.size() - 1];

    for (int i = 0; i < first.length(); i++)
        if (first[i] != last[i])
            break;
        else
            str.push_back(first[i]);

    return str;
}

int main()
{
    vector<string> str = {"flower", "flow", "flight"};
    cout << longestCommonPrefixOptimized(str);
    return 0;
}