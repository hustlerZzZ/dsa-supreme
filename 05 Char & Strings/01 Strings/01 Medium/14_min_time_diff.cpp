#include <bits/stdc++.h>
using namespace std;

// 539. Minimum Time Difference

int covertToMin(string s)
{
    int hr = stoi(s.substr(0, 2));
    int min = stoi(s.substr(3, 2));
    return 60 * hr + min;
}

// T.C : O(nlogn)
// S.C : O(n)
int findMinDifference(vector<string> &timePoints)
{
    vector<int> absMin;

    for (auto time : timePoints)
        absMin.push_back(covertToMin(time));

    sort(absMin.begin(), absMin.end());

    int minAns = INT_MAX;

    for (int i = 1; i < absMin.size(); i++)
        if (absMin[i] - absMin[i - 1] < minAns)
            minAns = absMin[i] - absMin[i - 1];

    int lastDiff = absMin[0] + 1440 - absMin[absMin.size() - 1];
    minAns = min(minAns, lastDiff);

    return minAns;
}

int main()
{
    vector<string> arr = {"23:59", "00:00"};

    cout << findMinDifference(arr);

    return 0;
}