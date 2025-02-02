#include <bits/stdc++.h>
using namespace std;

// 1781. Sum of Beauty of All Substrings

// finding all substrings (Nested loops)

// T.C : O(n^3)
// S.C : O(n)
int beautySum(string s)
{
    int ans = 0;

    unordered_map<char, int> hash;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            char &ch = s[j];
            hash[ch]++; // freq update of the character ch

            int mini = INT_MAX;
            int maxi = INT_MIN;

            // find most & least freq char from the map
            for (auto it : hash)
            {
                mini = min(it.second, mini);
                maxi = max(it.second, maxi);
            }

            ans += maxi - mini;
        }

        hash.clear();
    }

    return ans;
}

int main()
{
    cout << beautySum("aabcb") << endl;

    return 0;
}