#include <bits/stdc++.h>
using namespace std;

// L.C : 120. Triangle
int solve(vector<vector<int>> &triangle, int row, int col)
{
    if (row == triangle.size() - 1)
        return triangle[row][col];

    int down = triangle[row][col] + solve(triangle, row + 1, col);
    int plus = triangle[row][col] + solve(triangle, row + 1, col + 1);

    return min(down, plus);
}

int minimumTotal(vector<vector<int>> &triangle)
{
    return solve(triangle, 0, 0);
}

int main()
{
    vector<vector<int>> arr = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
    cout << minimumTotal(arr);

    return 0;
}