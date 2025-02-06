#include <bits/stdc++.h>
using namespace std;

// L.C : 1981. Minimize the Difference Between Target and Chosen Elements

// T.C : O(n^n)
// S.C : O(n)
int solve(vector<vector<int>> &mat, int &target, int sum, int row)
{
    if (row == mat.size())
        return abs(target - sum);

    int ans = INT_MAX;
    for (int i = 0; i < mat[row].size(); i++)
    {
        int reAns = solve(mat, target, sum + mat[row][i], row + 1);
        ans = min(ans, reAns);
    }

    return ans;
}

int minimizeTheDifference(vector<vector<int>> &mat, int target)
{
    int sum = 0;
    int row = 0;

    return solve(mat, target, sum, row);
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int target = 13;

    cout << minimizeTheDifference(matrix, target);

    return 0;
}