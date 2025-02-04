#include <bits/stdc++.h>
using namespace std;

// T.C : (n)
// S.C : (n)
int solve(string s, char p, int i)
{
    if (i == -1)
        return -1;

    if (s[i] == p)
        return i;

    return solve(s, p, i - 1);
}

int LastIndex(string s, char p)
{
    int ans = -1;
    ans = solve(s, p, s.size());
    return ans;
}

int main()
{
    string s = "Geeks";
    char p = 'e';

    cout << LastIndex(s, p);

    return 0;
}