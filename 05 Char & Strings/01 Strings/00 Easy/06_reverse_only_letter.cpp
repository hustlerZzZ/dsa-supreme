#include <bits/stdc++.h>
using namespace std;

// L.C : 917. Reverse Only Letters

bool checkValidAlphabet(char item)
{
    if ((item >= 65 && item <= 90) || (item >= 97 && item <= 122))
        return true;
    return false;
}

// T.C (n) -> O(n/2)
// S.C (1)
// Two Pointer
string reverseOnlyLetters(string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (end > start)
    {
        if (!checkValidAlphabet(s[start]))
            start++;
        else if (!checkValidAlphabet(s[end]))
            end--;
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
    cout << reverseOnlyLetters("a-bC-dEf-ghIj");
    return 0;
}