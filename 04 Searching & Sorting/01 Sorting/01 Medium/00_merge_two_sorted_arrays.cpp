#include <bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<int> a, vector<int> b)
{
    vector<int> ans;
    int i = 0, j = 0;

    while (a.size() > i && b.size() > j)
    {
        if (a[i] < b[j])
            ans.push_back(a[i++]);
        else
            ans.push_back(b[j++]);
    }

    while (a.size() > i)
    {
        ans.push_back(a[i++]);
    }

    while (b.size() > j)
    {
        ans.push_back(a[j++]);
    }

    return ans;
}

int main()
{
    vector<int> a = {20, 40, 60, 80, 90, 100};
    vector<int> b = {10, 30, 50, 70};

    vector<int> ans = mergeArrays(a, b);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}