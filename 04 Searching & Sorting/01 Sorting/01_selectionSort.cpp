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
void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // ith element is the smallest ele

        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    selectionSort(arr);

    print(arr);

    return 0;
}
