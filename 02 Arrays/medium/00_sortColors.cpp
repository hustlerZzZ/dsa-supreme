#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 75. Sort Colors

// T.C : O(nlogn)
// S.C : O(1)
void sortColorsUsingSort(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
}

// T.C : O(n)
// S.C : O(1)
void sortColorsUsingCounters(vector<int> &nums)
{
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zero++;
        }
        else if (nums[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    int counter = 0;

    while (zero)
    {
        nums[counter++] = 0;
        zero--;
    }

    while (one)
    {
        nums[counter++] = 1;
        one--;
    }

    while (two)
    {
        nums[counter++] = 2;
        two--;
    }
}

// T.C : O(n)
// S.C : O(1)
void sortColorsUsingThreePointer(vector<int> &nums)
{
    int low = 0, med = 0, high = nums.size() - 1;

    while (med <= high)
    {
        if (nums[med] == 0)
        {
            swap(nums[low], nums[med]);
            low++, med++;
        }
        else if (nums[med] == 1)
        {
            med++;
        }
        else
        {
            swap(nums[high], nums[med]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    sortColorsUsingThreePointer(arr);

    cout << "After sorting :" << endl;

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}