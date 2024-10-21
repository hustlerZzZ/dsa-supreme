#include <iostream>
#include <vector>

using namespace std;

vector<int> threeSumUsingLoops(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                    return {i, j, k};
            }
        }
    }

    return {-1, -1, -1};
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};

    vector<int> result = threeSumUsingLoops(arr, 7);

    cout << result[0] << " " << result[1] << " " << result[2];

    return 0;
}