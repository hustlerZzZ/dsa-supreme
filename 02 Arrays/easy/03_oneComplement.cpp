#include <iostream>
#include <vector>

using namespace std;

void oneComplement(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    }
}

int main()
{
    vector<int> arr = {0, 1, 1, 1, 0, 0, 1, 1};

    oneComplement(arr);

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}