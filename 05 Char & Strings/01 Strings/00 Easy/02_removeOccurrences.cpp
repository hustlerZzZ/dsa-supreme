#include <bits/stdc++.h>
using namespace std;

// L.C : 1910. Remove All Occurrences of a Substring

// T.C : O(n/k*(n-k)) where n -> length of stirng and k is length of pattern => O(n/k*(n-k))
// S.C : O(1)
string removeOccurrences(string s, string part)
{
    string ans = s;
    // jabtak full string k andr pattern milti rhegi tabtak loop chalao
    while (ans.find(part) != string::npos)
    {
        // full string m se erase kro
        // 1st arg -> pattern ka starting index
        // 2nd arg -> pattern ka ending index
        ans.erase(ans.find(part), part.length());
    }

    return ans;
}

int main()
{
    string s = "daabcbaabcbc";

    cout << removeOccurrences(s, "abc");

    return 0;
}