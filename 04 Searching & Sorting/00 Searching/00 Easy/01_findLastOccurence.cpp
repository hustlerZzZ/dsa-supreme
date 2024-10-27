#include <iostream>
#include <vector>

using namespace std;

// store & compute
int findLastOccurence(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ansIndex = -1;
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        if (arr[mid] == target)
        {
            ansIndex = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ansIndex;
}

int main()
{
    vector<int> arr = {20, 20, 20, 20, 20, 30, 40, 50, 60, 70};
    int target = 20;

    int result = findLastOccurence(arr, target);

    cout << "Last occurence of " << target << " in the array is : " << result << endl;

    return 0;
}
