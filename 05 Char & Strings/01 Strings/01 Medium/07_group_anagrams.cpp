#include <bits/stdc++.h>
using namespace std;

// L.C : 49. Group Anagrams

// Method : 1 --> Creating Map and Sort
// T.C : O(n * mlogm)
// S.C : O(n * m)
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    map<string, vector<string>> mp;

    for (auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>> ans;

    for (auto it : mp)
        ans.push_back(it.second);

    return ans;
}

std::array<int, 256> hashString(string s)
{
    std::array<int, 256> hash = {0};
    for (int i = 0; i < s.size(); i++)
        hash[s[i]]++;

    return hash;
}

// Method : 2 --> Creating a hash
// T.C : O(n * k)
// S.C : O(n * k)
vector<vector<string>> groupAnagramsHash(vector<string> &strs)
{
    map<std::array<int, 256>, vector<string>> mp;

    for (auto str : strs)
        mp[hashString(str)].push_back(str);

    vector<vector<string>> ans;

    for (auto it : mp)
        ans.push_back(it.second);

    return ans;
}

int main()
{
    vector<string> arr = {"eat", "tea", "tan", "ate", "nat", "bat"};

    groupAnagrams(arr);

    return 0;
}