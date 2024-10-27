#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// GFG : First Repeating Element

// T.C : O(n^2)
// S.C : O(1)
int firstRepeatedUsingNestedLoops(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
                return i + 1;
        }
    }

    return -1;
}

// T.C : O(n)
// S.C : O(n)
int firstRepeatedUsingHashMap(vector<int> &arr)
{
    unordered_map<int, int> hash;

    for (int i = 0; i < arr.size(); i++)
        hash[arr[i]]++;

    for (int i = 0; i < arr.size(); i++)
        if (hash[arr[i]] > 1)
            return i + 1;

    return -1;
}

int main()
{
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};

    int res = firstRepeatedUsingHashMap(arr);
    cout << res << endl;

    return 0;
}
