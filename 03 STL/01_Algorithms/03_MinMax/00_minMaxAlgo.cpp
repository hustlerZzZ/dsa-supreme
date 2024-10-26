#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    int a = 10;
    int b = 15;

    //  min
    cout << min(a, b) << endl;

    // max
    cout << max(a, b) << endl;

    // min range
    auto it = min_element(arr.begin(), arr.end());
    cout << *it << endl;

    // max range
    auto it2 = max_element(arr.begin(), arr.end());
    cout << *it2 << endl;

    return 0;
}
