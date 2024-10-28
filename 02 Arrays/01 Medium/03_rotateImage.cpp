#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 48. Rotate Image

// T.C : O(n^2)
// S.C : O(1)

void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (i < j)
                swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        int start = 0, end = matrix[0].size() - 1;
        while (end > start)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Before rotation : " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rotate(arr);

    cout << "After rotation : " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
