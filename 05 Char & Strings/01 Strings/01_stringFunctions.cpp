#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Maharana Pratap";

    // Compare
    string str1 = "Prince";
    string str2 = "Khushi";

    cout << str1.compare(str2) << endl;

    // Accessing
    cout << str[0] << endl;
    cout << str.at(0) << endl;

    // Front
    cout << str.front() << endl;

    // Back
    cout << str.back() << endl;

    // Length
    cout << str.length() << endl;

    // substring
    cout << str.substr(0, 5) << endl;

    // find
    cout << str.find("Pra") << endl;

    if (str.find("Yes!") != string::npos)
    {
        cout << "Not able to find this . " << endl;
    }

    // Iterator
    auto it = str.begin();

    while (it != str.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // empty
    cout << str.empty() << endl;

    // clear
    str.clear();

    cout << str.empty() << endl;

    return 0;
}