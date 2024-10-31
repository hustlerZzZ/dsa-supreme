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
void bubbleSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    bubbleSort(arr);

    print(arr);

    return 0;
}
