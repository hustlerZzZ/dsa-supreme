#include <bits/stdc++.h>
using namespace std;

static bool myComp(string a, string b)
{
    string t1 = a + b;
    string t2 = b + a;
    return t1 > t2;
}

// T.C : O(nlogn)
// S.C : O(n)
string largestNumber(vector<int> &nums)
{
    vector<string> snums;

    for (auto i : nums)
        snums.push_back(to_string(i));

    sort(snums.begin(), snums.end(), myComp);

    if (snums[0] == "0")
        return "0";

    string ans = "";

    for (int i = 0; i < snums.size(); i++)
        ans += snums[i];

    return ans;
}

int main()
{
    vector<int> arr = {3, 30, 34, 5, 9};

    cout << largestNumber(arr);

    return 0;
}