#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Leetcode : 169. Majority Elemet I

int mooreVotingAlgo(vector<int> &nums)
{
    int candidate = 0, count = 0;

    for (int element : nums)
    {
        if (count == 0)
            candidate = element;
        if (element == candidate)
            ++count;
        else
            count--;
    }

    return candidate;
}

int majorityElementUsingHashing(vector<int> &nums)
{
    unordered_map<int, int> hash;

    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums[i]]++;
    }

    for (auto it : hash)
    {
        if (it.second > nums.size() / 2)
        {
            return it.first;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {3, 2, 3};

    int ans = majorityElementUsingHashing(nums);

    cout << "Majority element is : " << ans << endl;

    return 0;
}
