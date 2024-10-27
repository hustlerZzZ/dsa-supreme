#include <iostream>
#include <vector>

using namespace std;

// Leet Code : 136. Single Number

// 1. Using XOR
int singleNumberXOR(vector<int> &nums)
{
    int num = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        num = num ^ nums[i];
    }

    return num;
}

// 2. Using Hashing

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};

    int result = singleNumberXOR(arr);

    cout << result;

    return 0;
}