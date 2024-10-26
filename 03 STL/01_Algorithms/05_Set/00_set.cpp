#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> first = {1, 2, 3, 4};
    vector<int> second = {3, 4, 5, 6};

    // set union
    vector<int> res;
    set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(res, res.begin()));

    for (auto &&i : res)
    {
        cout << i << " ";
    }

    cout << endl;

    // set intersection
    vector<int> res2;
    set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(res2, res2.begin()));

    for (auto &&i : res2)
    {
        cout << i << " ";
    }

    cout << endl;

    // set diff
    vector<int> res3;
    set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(res3, res3.begin()));

    for (auto &&i : res3)
    {
        cout << i << " ";
    }

    cout << endl;

    // set symmetric diff
    vector<int> res4;
    set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(res4, res4.begin()));

    for (auto &&i : res4)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
