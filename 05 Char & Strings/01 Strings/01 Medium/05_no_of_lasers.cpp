#include <bits/stdc++.h>
using namespace std;

int countDevice(string s)
{
    int count = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '1')
            count++;
    return count;
}

// T.C : O(n^2)
// S.C : O(n)
int numberOfBeams(vector<string> &bank)
{
    vector<int> device;

    for (auto row : bank)
        device.push_back(countDevice(row));

    int beams = 0;

    for (int i = 0; i < device.size(); i++)
    {
        int j = i + 1;
        while (j < device.size())
        {
            beams += device[i] * device[j];
            if (device[j] == 0)
                j++;
            else
                break;
        }
    }

    return beams;
}

int main()
{
    vector<string> bank = {"011001", "000000", "010100", "001000"};

    cout << numberOfBeams(bank);

    return 0;
}