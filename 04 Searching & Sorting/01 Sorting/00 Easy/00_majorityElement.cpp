#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Leetcode : 229. Majority Elemet II

vector<int> majorityElement(vector<int> &nums)
{
    unordered_map<int, int> hash;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        hash[nums[i]]++;
    }

    for (auto it : hash)
    {
        if (it.second > nums.size() / 3)
        {
            ans.push_back(it.first);
        }
    }

    return ans;
}

int main()
{
    vector<int> nums = {1, 2};

    vector<int> ans = majorityElement(nums);

    for (auto it : ans)
    {

        cout << it << " ";
    }

    return 0;
}
