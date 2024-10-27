#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>

using namespace std;

// T.C : O(n^2)
// S.C : O(1)
void wavePrint(vector<vector<int>> &arr)
{
    for (int col = 0; col < arr[0].size(); col++)
    {
        if ((col & 1) == 0)
            for (int row = 0; row < arr.size(); row++)
                cout << arr[row][col] << " ";
        else
            for (int row = arr.size() - 1; row >= 0; row--)
                cout << arr[row][col] << " ";
    }
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    wavePrint(arr);

    return 0;
}
