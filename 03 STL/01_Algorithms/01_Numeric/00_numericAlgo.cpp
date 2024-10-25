#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // accumulate
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    cout << totalSum << endl;

    vector<int> first = {1, 2, 3};
    vector<int> second = {4, 5, 6};

    // inner_product
    int totalProduct = inner_product(first.begin(), first.end(), second.begin(), 0);
    cout << totalProduct << endl;

    // partital_sum
    vector<int> result(first.size());
    partial_sum(first.begin(), first.end(), result.begin());

    for (auto &&i : result)
    {
        cout << i << " ";
    }

    cout << endl;

    // iota
    iota(first.begin(), first.end(), 250);

    for (auto &&i : first)
    {
        cout << i << " ";
    }

    return 0;
}
