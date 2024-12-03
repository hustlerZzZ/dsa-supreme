#include <bits/stdc++.h>
using namespace std;

// L.C : 890. Find and Replace Pattern

vector<string> findAndReplacePattern(vector<string> &words, string pattern)
{
}

int main()
{
    vector<string> garbage = {"abc", "deq", "mee", "aqq", "dkd", "ccc"};
    string travel = "abb";

    vector<string> ans = findAndReplacePattern(garbage, travel);

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}