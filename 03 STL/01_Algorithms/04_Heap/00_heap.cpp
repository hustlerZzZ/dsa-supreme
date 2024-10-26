#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {22, 11, 33, 44, 77, 55, 66};

    // make heap -> O(n)
    make_heap(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // insert
    arr.push_back(99);

    // push heap -> O(n)
    push_heap(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // pop heap -> O(1)
    pop_heap(arr.begin(), arr.end());

    // pop in vector
    arr.pop_back();

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    // sort heap ->
    sort_heap(arr.begin(), arr.end());

    for (int a : arr)
    {
        cout << a << " ";
    }

    cout << endl;

    return 0;
}
