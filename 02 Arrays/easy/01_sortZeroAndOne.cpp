#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sortZeroOneCount(vector<int> &arr)
{
    int zero = 0, one = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            one++;
        }
    }

    int counter = 0;

    while (zero)
    {
        arr[counter++] = 0;
        zero--;
    }

    while (one)
    {
        arr[counter++] = 1;
        one--;
    }
}

void sortZeroOneSort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

void sortZeroOneTwoPointer(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;

    while (high > low)
    {
        if (arr[low] == 0)
            low++;
        else if (arr[high] == 1)
            high--;
        else
            swap(arr[low++], arr[high--]);
    }
}

int main()
{
    vector<int> arr = {0, 1, 1, 1, 0, 0, 1, 1};

    sortZeroOneTwoPointer(arr);

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}