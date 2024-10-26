#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};

    // creating a iterator
    vector<int>::iterator it = arr.begin();

    // iterating over the vector
    while (it != arr.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    return 0;
}
