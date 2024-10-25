#include <iostream>
#include <queue>

using namespace std;

int main()
{
    // min - heap -> Min Value -> Highest priority
    // creation
    priority_queue<int, vector<int>, greater<int>> pq;

    // insertion
    pq.push(10);
    pq.push(20);
    pq.push(60);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    // deletion of highest priority ele
    pq.pop();
    pq.pop();

    // accessing the top ele
    cout << pq.top() << endl;

    // size of the queue
    cout << "Size of the Priority Queue : " << pq.size() << endl;

    // checking if the queue is empty
    pq.empty() ? cout << "Priority Queue is emptyy" : cout << "Priority Queue is not empty";

    return 0;
}
