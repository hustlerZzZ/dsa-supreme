#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> &arr)
{
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;
}

// T.C : O(n^2)
// S.C : O(1)
void insertionSort(vector<int> &arr)
{
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    insertionSort(arr);

    print(arr);

    return 0;
}
