#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class comparator
{
public:
    bool operator()(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    vector<int> arr = {11, 2, 434, 543, 1000};

    // sort in ascending order
    // if added comparator we can do descending order
    sort(arr.begin(), arr.end(), comparator());

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
