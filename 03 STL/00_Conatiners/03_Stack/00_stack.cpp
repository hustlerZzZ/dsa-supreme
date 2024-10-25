#include <iostream>
#include <stack>

using namespace std;

int main()
{
    // creation
    stack<int> st;

    // insertiton
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    // deletion
    st.pop();
    st.pop();

    // Getting the top ele
    cout << st.top() << endl;

    // size of the queue
    cout << "Size of the stack : " << st.size() << endl;

    // checking if the stack is empty
    st.empty() ? cout << "Stack is emptyy" : cout << "Stack is not empty";

    return 0;
}
