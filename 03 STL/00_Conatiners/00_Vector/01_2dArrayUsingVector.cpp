#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> arr(4, vector<int>(3, 0));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
