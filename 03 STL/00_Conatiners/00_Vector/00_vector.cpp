#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v)
{
    for (auto &&i : v)
    {
        cout << i << " ";
    }
}

int main()
{
    vector<int> arr;
    vector<int> arr2(5, -1);
    vector<int> arr3 = {1, 2, 3};

    // insert
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    // checking the front element
    cout << "Front ele of the vector : " << arr.front() << endl;

    // checking the end element
    cout << "End ele of the vector : " << arr.back() << endl;

    // deleting the element
    arr.pop_back();

    // capacity of the vector
    cout << "Capacity of the vector : " << arr.capacity() << endl;

    // Creating an iterator
    vector<int>::iterator it = arr.begin();

    while (it != arr.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // Clearing the whole vector
    arr.clear();

    // printing the size of the vector & vector
    cout << "Size of the vector : " << arr.size() << endl;
    print(arr);

    return 0;
}
