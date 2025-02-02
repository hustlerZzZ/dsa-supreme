#include <bits/stdc++.h>
using namespace std;

// L.C : 151. Reverse Words in a String
// T.C : O(n)
// S.C : O(1)
string reverseWords(string s)
{
    reverse(s.begin(), s.end()); // reversing the whole string
    int start = 0, end = 0;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        // 1. skip leading space
        while (s[i] == ' ' && i < n)
            i++;

        if (i == n) // out of bound check
            break;

        // 2. Copy char of a word to the correct position
        while (s[i] != ' ' && i < n)
            s[end++] = s[i++];

        // 3. Reverse individual word
        reverse(s.begin() + start, s.begin() + end);

        // 4. Add space b/w words
        s[end++] = ' ';
        start = end;

        // 5. We mark one iteration complete
    }

    // 6. final step: resize --> end - 1
    s.resize(end - 1);

    return s;
}

int main()
{
    cout << reverseWords("the sky is blue");

    return 0;
}