#include <bits/stdc++.h>
using namespace std;

// L.C : 345. Reverse Vowels of a String

bool checkVowel(char item)
{
    item = tolower(item);
    if (item == 'a' || item == 'e' || item == 'i' || item == 'o' || item == 'u')
        return true;
    return false;
}

// T.C : O(n)
// S.C : O(1)
string reverseVowels(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (end > start)
    {
        if (!checkVowel(s[start]))
        {
            start++;
        }
        else if (!checkVowel(s[end]))
        {
            end--;
        }
        else
        {
            swap(s[start], s[end]);
            start++, end--;
        }
    }

    return s;
}

int main()
{
    cout << reverseVowels("IceCreAm");

    return 0;
}