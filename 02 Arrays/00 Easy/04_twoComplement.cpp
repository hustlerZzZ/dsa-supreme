#include <iostream>
#include <vector>

using namespace std;

void twoComplement(vector<int> &arr)
{
    // Getting one Complement
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    }

    int carry = 1;

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] == 0)
        {
            arr[i] = arr[i] + carry;
            break;
        }
        else if (arr[i] == 1)
        {
            arr[i] = arr[i] + carry;
            if (arr[i] > 1)
            {
                arr[i] = 1;
                carry = 1;
            }
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 1, 1, 0, 0, 0, 0};

    twoComplement(arr);

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}