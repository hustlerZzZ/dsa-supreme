#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Leet Code : 162. Find Peak Element

// T.C : O(n)
// S.C : O(1)
int findPeakElement(vector<int> &nums)
{
    int peak = -1;

    for (int i = 1; i < nums.size() - 1; i++)
    {
        if (nums[i - 1] < nums[i] && nums[i] < nums[i + 1])
        {
            peak = nums[i];
        }
    }

    return peak;
}

int main()
{
    vector<int> mountain = {1, 2, 3, 1};

    int ans = findPeakElement(mountain);

    cout << "The peak of the mountain is at : " << ans << endl;

    return 0;
}
