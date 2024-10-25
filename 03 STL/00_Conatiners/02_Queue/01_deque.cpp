#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // creation
    deque<int> dq;

    // insertion at end
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(400);
    dq.push_back(90);

    // insertion at front
    dq.push_front(50);
    dq.push_front(60);

    // deletion at end
    dq.pop_back();
    dq.pop_back();

    // deletion at front
    dq.pop_front();
    dq.pop_front();

    // accesing the ele
    cout << dq[0] << endl;
    cout << dq.at(0) << endl;

    // getting the front ele
    cout << dq.front() << endl;

    // creating the iterator
    deque<int>::iterator it = dq.begin();

    while (it != dq.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // size of deque
    cout << "Size of the deque : " << dq.size() << endl;

    // clearing the deque
    dq.clear();

    return 0;
}
