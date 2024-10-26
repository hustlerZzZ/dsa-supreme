#include <iostream>
#include <vector>

using namespace std;

class functorOne
{
public:
    bool operator()(int a, int b) // descending order comparison
    {
        return a > b;
    }
};

int main()
{
    functorOne cmp;

    if (cmp(10, 5))
        cout << "10 is greater than 5" << endl;
    else
        cout << "10 is not greater than 5" << endl;

    return 0;
}
