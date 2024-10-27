#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// T.C : O(n)
// S.C : O(1)
void findMissingVisitedMethod(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
            arr[index - 1] *= -1;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
            cout << i + 1 << " ";
    }
}

// T.C : O(n)
// S.C : O(1)
void findMissingSortingAndSwapping(vector<int> &arr)
{
    int i = 0;
    while (arr.size() > i)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
            swap(arr[i], arr[index]);
        else
            i++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (i + 1 != arr[i])
            cout << i + 1 << " ";
    }
}

int main()
{
    vector<int> arr = {1, 3, 3, 3, 3};

    findMissingSortingAndSwapping(arr);

    return 0;
}
