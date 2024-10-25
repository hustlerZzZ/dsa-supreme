#include <iostream>
#include <list>
using namespace std;

int main()
{
    // creation
    list<int> myList;

    // insertion in back
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    // insertion in front
    myList.push_front(0);

    // deletion from back
    myList.pop_back();

    // deletion from front
    myList.pop_front();

    // getting size of the list
    cout << "Size of the list : " << myList.size() << endl;

    // Getting the front ele
    cout << myList.front() << endl;

    // Getting the back ele
    cout << myList.back() << endl;

    cout << "Iterating the list :" << endl;

    // Creating the iterator
    list<int>::iterator it = myList.begin();

    while (it != myList.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // clearing the list
    myList.clear();

    if (myList.empty() == true)
    {
        cout << "List is empty." << endl;
        cout << "Size of the list : " << myList.size() << endl;
    }

    return 0;
}
