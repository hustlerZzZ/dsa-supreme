#include <bits/stdc++.h>
using namespace std;

// L.C : 1047. Remove All Adjacent Duplicates In String

// T.C : O(n)
// S.C : O(n)
string removeDuplicates(string s)
{
    // init empty string
    string ans = "";
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        char currChar = s[i];
        if (ans.empty())
        {
            ans.push_back(currChar);
        }
        else if (currChar == ans.back())
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(currChar);
        }
    }

    return ans;
}

int main()
{
    string s = "azxxzy";

    cout << removeDuplicates(s) << endl;

    return 0;
}