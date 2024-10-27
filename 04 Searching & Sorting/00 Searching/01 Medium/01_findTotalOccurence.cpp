#include <iostream>
#include <vector>

using namespace std;

int findFirstOccurence(vector<int> &arr, int target)
{
    int start = 0, end = arr.size() - 1;
    int ansIndex = -1;
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        if (arr[mid] == target)
        {
            ansIndex = mid;
            end = mid - 1;
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

int totalOccurence(vector<int> &nums, int target)
{
    return findLastOccurence(nums, target) - findFirstOccurence(nums, target) + 1;
}

int main()
{
    vector<int> arr = {10, 20, 20, 20, 20, 20, 20, 30, 40, 50};
    int target = 20;

    int result = totalOccurence(arr, target);

    cout << "Total occurence of element : " << target << " in the array is " << result << endl;

    return 0;
}
