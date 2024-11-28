#include <bits/stdc++.h>
using namespace std;

// T.C : O(n)
// S.C : O(1)
int getLength(char arr[], int size)
{
    int count = 0;
    int index = 0;

    while (arr[index] != '\0')
    {
        if (arr[index] != '\n')
        {
            count++, index++;
        }
    }

    return count;
}

int main()
{
    char arr[100];

    cout << "Enter your char array : " << endl;

    cin.getline(arr, 100);

    cout << "The char array length is : " << getLength(arr, 100);

    return 0;
}