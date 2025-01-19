#include <bits/stdc++.h>
using namespace std;

bool areLastK_1CharsSame(string &ans, char &ch, int k)
{
    int it = ans.size() - 1;
    for (int i = 0; i < k; i++)
    {
        if (ch != ans[it])
            return false;

        it--;
    }

    return true;
}

// Method 1

// T.C : O(n * k)
// S.C : O(1)
string removeDuplicates(string s, int k)
{
    string ans;

    for (int i = 0; i < s.size(); i++)
    {
        char &ch = s[i];
        if (ans.size() < k - 1)
            ans.push_back(ch);
        else
        {
            if (areLastK_1CharsSame(ans, ch, k - 1))
                for (int j = 0; j < k - 1; j++)
                    ans.pop_back();
            else
                ans.push_back(ch);
        }
    }

    return ans;
}

// Method 2
// T.C : O(n)
// S.C : O(n)
string removeDuplicatesII(string s, int k)
{
    int i = 0, j = 0;
    vector<int> count(s.size());

    while (j < s.size())
    {
        s[i] = s[j];
        count[i] = 1;
        if (i > 0 && s[i] == s[i - 1])
            count[i] += count[i - 1];
        if (count[i] == k)
            i -= k;

        i++, j++;
    }

    return s.substr(0, i);
}

int main()
{
    cout << removeDuplicates("deeedbbcccbdaa", 3);

    return 0;
}