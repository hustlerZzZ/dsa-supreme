#include <bits/stdc++.h>
using namespace std;

void printSubSeq(string str, int i, string output)
{
    // base case
    if (str.size() == i)
    {
        cout << output << endl;
        return;
    }

    char ch = str[i];

    // include
    printSubSeq(str, i + 1, output + ch);

    // exclude
    printSubSeq(str, i + 1, output);
}

int main()
{
    string str = "abc";
    string ans = "";
    int index = 0;

    printSubSeq(str, index, ans);

    return 0;
}