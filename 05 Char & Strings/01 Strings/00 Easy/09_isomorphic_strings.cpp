#include <bits/stdc++.h>
using namespace std;

// L.C : 205. Isomorphic Strings

// T.C : O(n)
// S.C : O(1)
bool isIsomorphic(string s, string t)
{
    if (s.length() != t.length())
        return false;

    int arr[256] = {0};            // mapping of each char of language s to language t
    bool istCharMapped[256] = {0}; // stores if t[i] char already mapped with s[i]

    for (int i = 0; i < s.size(); i++)
    {
        if (arr[s[i]] == 0 && istCharMapped[t[i]] == 0)
        {
            arr[s[i]] = t[i];
            istCharMapped[t[i]] = true;
        }
    }

    for (int i = 0; i < s.size(); i++)
        if (char(arr[s[i]]) != t[i])
            return false;

    return true;
}

int main()
{
    cout << isIsomorphic("egg", "add");

    return 0;
}