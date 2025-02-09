#include <bits/stdc++.h>
using namespace std;

void removeOCCRE(string &s, string &part)
{
    int found = s.find(part);
    if (found != string::npos)
    {
        // part string has been located
        // remove it
        string left_part = s.substr(0, found);
        string right_part = s.substr(found + part.size(), s.size());
        s = left_part + right_part;

        removeOCCRE(s, part);
    }
    else
    {
        // base case
        // all the occurences of part has been removed from s
        return;
    }
}

// T.C : O(N^2)
// S.C : O(N/M)
string removeOccurrences(string s, string part)
{
    removeOCCRE(s, part);
    return s;
}

int main()
{
    cout << removeOccurrences("daabcbaabcbc", "abc");

    return 0;
}