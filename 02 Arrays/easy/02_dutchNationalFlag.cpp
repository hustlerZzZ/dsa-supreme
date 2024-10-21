#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dutchNationalFlagCounter(vector<int> &arr)
{
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    cout << zero << " " << one << " " << two << endl;

    int counter = 0;

    while (zero)
    {
        arr[counter++] = 0;
        zero--;
    }

    while (one)
    {
        arr[counter++] = 1;
        one--;
    }

    while (two)
    {
        arr[counter++] = 2;
        two--;
    }
}

int main()
{
    vector<int> arr = {2, 0, 1, 1, 2, 1, 0, 0, 1, 1, 2};

    dutchNationalFlagCounter(arr);

    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}