#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // creation
    queue<int> q;

    // insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    // deletion
    q.pop();
    q.pop();

    // accessing the front ele
    cout << q.front() << endl;

    // accessing the back ele
    cout << q.back() << endl;

    // size of the queue
    cout << "Size of the queue : " << q.size() << endl;

    // checking if the queue is empty
    q.empty() ? cout << "Queue is emptyy" : cout << "Queue is not empty";

    return 0;
}
