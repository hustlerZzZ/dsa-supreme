#include <bits/stdc++.h>
using namespace std;

// L.C : 767. Reorganize String

// Priority Queue -> T.C : O(nlogn)

// Greedy
// 1. Most occurent character and fit it no-adjacently
// 2. fill the rest character
// T.C : O(n)
// S.C : O(1)
string reorganizeString(string s)
{
    // Create a hash
    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    // find the most frequent character
    char most_freq_char;
    int max_freq = INT_MIN;

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > max_freq)
        {
            max_freq = hash[i];
            most_freq_char = i + 'a';
        }
    }

    // Try to place the most frequent
    int index = 0;
    while (max_freq > 0 && index < s.size())
    {
        s[index] = most_freq_char;
        max_freq--;
        index += 2;
    }

    if (max_freq != 0)
        return "";

    hash[most_freq_char - 'a'] = 0;

    // let's place the rest of the characters
    for (int i = 0; i < 26; i++)
    {
        while (hash[i] > 0)
        {
            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
        }
    }

    return s;
}

int main()
{

    cout << reorganizeString("aab");

    return 0;
}