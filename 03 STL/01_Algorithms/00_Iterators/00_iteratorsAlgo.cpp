#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDouble(int a)
{
    cout << 2 * a << " ";
}

bool checkEven(int a)
{
    return a % 2 == 0;
}

int main()
{
    vector<int> arr(6);
    arr[0] = 11;
    arr[1] = 12;
    arr[2] = 13;
    arr[3] = 14;
    arr[4] = 15;
    arr[5] = 16;

    // for_each
    for_each(arr.begin(), arr.end(), printDouble);

    cout << endl;

    // find
    int target = 40;
    auto it = find(arr.begin(), arr.end(), target);
    cout << *it << " " << endl;

    // find_if
    auto it2 = find_if(arr.begin(), arr.end(), checkEven);
    cout << *it2 << " " << endl;

    // count
    int ans = count(arr.begin(), arr.end(), target);
    cout << ans << endl;

    // count if
    int ans2 = count_if(arr.begin(), arr.end(), checkEven);
    cout << ans2 << endl;

    // sort
    sort(arr.begin(), arr.end());

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    // reverse
    reverse(arr.begin(), arr.end());

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    // rotate
    rotate(arr.begin(), arr.begin() + 3, arr.end());

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    // unique
    auto it3 = unique(arr.begin(), arr.end());

    arr.erase(it3, arr.end());

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    // partition
    partition(arr.begin(), arr.end(), checkEven);

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
