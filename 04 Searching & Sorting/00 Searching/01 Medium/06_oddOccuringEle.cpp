/*
    Odd Occuring Element
    1. all element occurs even number of times except one
    2. element repeats itself in pairs
    3. no pair repeats itself, no number can occur more than 2 times in a single stretch
    4. find element that occur odd times
*/
#include <iostream>

#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Leetcode : 540. Single Element in a Sorted Array

// T.C : O(n)
// S.C : O(1)
int oddElementUsingXOR(vector<int> &arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
        ans = ans ^ arr[i];

    return ans;
}

// T.C : O(n)
// S.C : O(1)
int oddElementUsingHashMap(vector<int> &arr)
{
    unordered_map<int, int> hashMap;

    for (int i = 0; i < arr.size(); i++)
    {
        hashMap[arr[i]]++;
    }

    for (auto &&i : hashMap)
    {
        if (i.second % 2 != 0)
            return i.first;
    }

    return -1;
}

// T.C : O(logn)
// S.C : O(1)
int oddElementUsingBinarySearch(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (end >= start)
    {
        // single element
        if (start == end)
            return arr[start];

        int leftValue = -1;
        int rightValue = -1;
        int currValue = arr[mid];

        if (mid - 1 >= 0)
            leftValue = arr[mid - 1];

        if (mid + 1 < arr.size())
            rightValue = arr[mid + 1];

        // duplicate doesn't exist
        if (currValue != leftValue && currValue != rightValue)
            return currValue;

        // duplicate exist in left index
        if (currValue == leftValue && currValue != rightValue)
        {
            int pairStartingIndex = mid - 1;
            if (pairStartingIndex & 1)
                // pair starting index is odd
                // i am standing at right part
                // move to left
                end = mid - 1;
            else
                // pair starting index is even
                // i am standing at left part
                // move to right
                start = mid + 1;
        }

        // duplicate exist in right index
        if (currValue != leftValue && currValue == rightValue)
        {
            int pairStartingIndex = mid;
            if (pairStartingIndex & 1)
                // pair starting index is odd
                // i am standing at right part
                // move to left
                end = mid - 1;
            else
                // pair starting index is even
                // i am standing at left part
                // move to right
                start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 3, 3};

    int res = oddElementUsingBinarySearch(arr);

    cout << "The result index is : " << res << endl;
    cout << "The result element is : " << arr[res] << endl;

    return 0;
}
