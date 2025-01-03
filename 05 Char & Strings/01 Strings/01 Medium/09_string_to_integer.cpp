#include <bits/stdc++.h>
using namespace std;

// L.C : 8. String to Integer (atoi)

int myAtoi(string s)
{
    long long int ans = atoi(s.c_str());
    return ans;
}

int myAtoiCustom(string s)
{
    int ans = 0;
    int i = 0;
    int sign = 1; // +ve

    while (s[i] == ' ')
        i++;

    while (i < s.size() && (s[i] == '-' || s[i] == '+'))
    {
        sign = s[i] == '+' ? 1 : -1;
        i++;
        break;
    }

    while (i < s.size() && isdigit(s[i]))
    {
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && s[i] > '7'))
            return sign == -1 ? INT_MIN : INT_MAX;
        ans = ans * 10 + (s[i] - '0');
        i++;
    }

    return sign * ans;
}

int main()
{
    cout << myAtoiCustom("+-12");

    return 0;
}