#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    int index = 0, count = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        int one = 0;
        for (int j = 0; j < mat[0].size(); j++)
            if (mat[i][j] == 1)
                one++;

        if (one > count)
        {
            count = one;
            index = i;
        }
    }

    return {index, count};
}

int main()
{
    vector<vector<int>> matrix = {{0, 1}, {1, 0}};

    vector<int> ans = rowAndMaximumOnes(matrix);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
