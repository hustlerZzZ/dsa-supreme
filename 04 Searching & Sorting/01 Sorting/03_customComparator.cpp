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

bool myComp(int &a, int &b)
{
    // return a < b; // increasing order sorting
    return a > b; // decreasing order sorting
}

// T.C : O(nlogn)
// S.C : O(1)
void customComparator(vector<int> &arr)
{
    sort(arr.begin(), arr.end()); // by default in increasing order
    print(arr);
    sort(arr.begin(), arr.end(), myComp); // in decreasing order
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    customComparator(arr);

    print(arr);

    return 0;
}
