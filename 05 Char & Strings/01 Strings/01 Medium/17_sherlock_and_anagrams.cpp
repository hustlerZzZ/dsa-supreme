#include <bits/stdc++.h>
using namespace std;

// Hacker Rank : Sherlock and Anagrams

// Method 1 :
// 1. find all substr
// 2. store
// 3. loop over stored substr and check if they are anagram or not
int sherlock(string s)
{
    vector<string> str;

    for (int i = 0; i < s.size(); i++)
        for (int j = i; j < s.size(); j++)
            str.push_back(s.substr(i, j - i + 1));

    int count = 0;

    for (int i = 0; i < str.size(); i++)
        for (int j = i + 1; j < str.size(); j++)
            if (str[i] == str[j])
                count++;

    return count;
}

// Method 2 :
// 1. Generate all possible sub strings
// 2. Sort each string
// 3. Count occurences of each sorted string
// 4. Cal. pairs
int sherlockAndAnagrams(string s)
{
    unordered_map<string, int> hash;
    int anag_pairs = 0;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            string subString = s.substr(i, j - i + 1);
            // sort
            sort(subString.begin(), subString.end());
            // update in hash
            hash[subString]++;
        }
    }

    for (auto it : hash)
    {
        int count = it.second;
        anag_pairs += (count * (count - 1)) / 2;
    }

    return anag_pairs;
}

int main()
{
    cout << sherlockAndAnagrams("abba");

    return 0;
}