#include <bits/stdc++.h>
using namespace std;

// L.C : 2325. Decode the Message

// T.C : O(n)
// S.C : O(m)
string decodeMessage(string key, string message)
{
    unordered_map<char, char> map;
    char space = ' ';
    map[space] = ' ';

    int start = 'a';
    int index = 0;

    while (start <= 'z' && index < key.length())
    {
        char keyCurr = key[index];
        if (map.find(keyCurr) != map.end())
            index++;
        else
        {
            map[keyCurr] = start++;
            index++;
        }
    }

    string ans = "";

    for (int i = 0; i < message.length(); i++)
    {
        char msgChar = message[i];
        char mappedChar = map[msgChar];

        ans.push_back(mappedChar);
    }

    return ans;
}

int main()
{
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    cout << decodeMessage(key, message);

    return 0;
}