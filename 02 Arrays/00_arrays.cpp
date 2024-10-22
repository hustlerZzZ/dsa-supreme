#include <iostream>
using namespace std;

int main()
{
    // static memory allocation
    int old[5] = {1, 2, 3, 5, 4};

    // dynamic memory allocation
    int n;
    cin >> n;

    int *arr = new int[n]; // Each element would be 0, or garbage
    cout << arr[0] << " " << arr[1];

    return 0;
}
