#include <iostream>
#include <vector>

using namespace std;

vector<int> twoComplement(vector<int> &arr)
{
    vector<int> comp(arr.size() + 1);

    // Getting one Complement
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            comp[i] = 1;
        else
            comp[i] = 0;
    }

    int carry = 1;

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (carry == 0)
            break;
        int sum = comp[i] + carry;
        comp[i] = sum % 2;
        carry = sum / 2;
    }

    if (carry == 1)
        comp[0] = 1;

    return comp;
}

int main()
{
    vector<int> arr = {0, 0, 0, 0, 0};

    cout << "Before 2's complement : " << endl;

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    cout << endl;

    vector<int> res = twoComplement(arr);

    cout << "After 2's complement : " << endl;

    for (auto &&i : res)
    {
        cout << i << " ";
    }

    return 0;
}