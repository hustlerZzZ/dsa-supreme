#include <iostream>
#include <vector>

using namespace std;

bool linearSearch(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == target)
            return true;

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    if (linearSearch(arr, 4))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
