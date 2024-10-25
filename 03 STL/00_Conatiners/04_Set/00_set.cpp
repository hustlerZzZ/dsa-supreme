#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{
    // creation
    // set<int> st;
    unordered_set<int> st;

    // insertion
    st.insert(10);
    st.insert(15);
    st.insert(12);
    st.insert(14);

    // traverse
    unordered_set<int>::iterator it = st.begin();

    while (it != st.end())
    {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // find
    st.find(15) != st.end() ? cout << "ele is found " : cout << "ele is not found ";

    cout << endl;

    // Count
    st.count(15) == 1 ? cout << "ele is found " : cout << "ele is not found ";

    cout << endl;

    // size
    cout << st.size() << endl;

    // clearing
    st.clear();

    cout << st.size() << endl;

    st.empty() ? cout << "Set is empty " : cout << "Set is not empty ";

    return 0;
}
