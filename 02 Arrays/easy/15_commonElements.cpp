#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>

using namespace std;

// GFG : Common in 3 Sorted Arrays

// T.C : O(n1 + n2 + n3)
// S.C : O(n) smallest array
vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    int i = 0, j = 0, k = 0;
    set<int> mySet;

    while (arr1.size() > i && arr2.size() > j && arr3.size() > k)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            mySet.insert(arr1[i]);
            i++, j++, k++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }

    vector<int> ans;

    for (auto &&i : mySet)
        ans.push_back(i);

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    vector<int> res = commonElements(arr1, arr2, arr3);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}
