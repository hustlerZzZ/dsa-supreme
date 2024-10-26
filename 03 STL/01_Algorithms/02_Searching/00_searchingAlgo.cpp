#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    // binary search -> T.C : O(nlogn)
    int target = 40;
    auto it = binary_search(arr.begin(), arr.end(), target);
    it ? cout << "Element found" << endl : cout << "Element not found" << endl;

    // lower found
    auto it2 = lower_bound(arr.begin(), arr.end(), 30);
    cout << *it2 << endl;

    // upper found
    auto it3 = upper_bound(arr.begin(), arr.end(), 30);
    cout << *it3 << endl;

    // equal range
    auto it4 = equal_range(arr.begin(), arr.end(), 30);
    cout << *it4.first << " " << *it4.second << endl;

    return 0;
}
