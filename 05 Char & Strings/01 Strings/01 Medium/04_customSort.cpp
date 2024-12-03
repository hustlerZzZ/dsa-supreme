#include <bits/stdc++.h>
using namespace std;

// L.C : 791. Custom Sort String

string str;

// T.C : O(m * nlogn)
// S.C : O(1)
bool cmp(char a, char b)
{
    // logic
    // order wali string m dekho, konsa char phle or konsa baad m

    // true -> a will be placed before b
    // false -> b will be placed before a

    // hume sirf order wali string m a and b char kha kaise exist krta h
    // same vohi replicate krna h

    return (str.find(a) < str.find(b));
}

string customSortString(string order, string s)
{
    str = order;
    sort(s.begin(), s.end(), cmp);
    return s;
}

int main()
{
    string order = "cba";
    string s = "abcd";

    cout << customSortString(order, s);

    return 0;
}