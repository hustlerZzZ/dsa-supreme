#include <bits/stdc++.h>
using namespace std;

// L.C : 2391. Minimum Amount of Time to Collect Garbage

// Bruteforce
// T.C : O(n * 10) => O(n) as garbage max length is 10
// S.C : O(1)
int garbageCollection(vector<string> &garbage, vector<int> &travel)
{
    // P truck
    int pickP = 0, travelP = 0, lastHouseP = 0;
    // M truck
    int pickM = 0, travelM = 0, lastHouseM = 0;
    // G truck
    int pickG = 0, travelG = 0, lastHouseG = 0;

    // let's travel to the street of the houses
    for (int i = 0; i < garbage.size(); i++)
    {
        // ith House
        string currHouse = garbage[i];

        for (int j = 0; j < currHouse.size(); j++)
        {
            char currGarbage = currHouse[j];
            if (currGarbage == 'P')
            {
                pickP++;
                // yha tak to mera P truck pkka aaya h
                lastHouseP = i;
            }
            if (currGarbage == 'M')
            {
                pickM++;
                lastHouseM = i;
            }
            if (currGarbage == 'G')
            {
                pickG++;
                lastHouseG = i;
            }
        }
    }

    // calculate travel time for P
    for (int i = 0; i < lastHouseP; i++)
    {
        travelP = travelP + travel[i];
    }

    for (int i = 0; i < lastHouseG; i++)
    {
        travelG = travelG + travel[i];
    }

    for (int i = 0; i < lastHouseM; i++)
    {
        travelM = travelM + travel[i];
    }

    return pickG + pickP + pickM + travelP + travelG + travelM;
}

int main()
{
    vector<string> garbage = {"G", "P", "GP", "GG"};
    vector<int> travel = {2, 3, 4};

    cout << garbageCollection(garbage, travel);

    return 0;
}