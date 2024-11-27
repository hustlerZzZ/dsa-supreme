#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl "\n"
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

const int MOD = 1e9 + 7;        // value commonly used in problems
const int INF = LLONG_MAX >> 1; // is a substitute for infinity

bool isPossible(vector<int> ranks, int nP, int sol)
{
    int currP = 0; // initial cooked parata count

    for (int i = 0; i < ranks.size(); i++)
    {
        int R = ranks[i], j = 1;
        int timeTaken = 0;

        while (true)
        {
            if (timeTaken + j * R <= sol)
            {
                ++currP;
                timeTaken += j * R;
                ++j;
            }
            else
            {
                break;
            }
        }

        if (currP >= nP)
        {
            return true;
        }
    }

    return false;
}

int minTimeToCompleteOrder(vector<int> ranks, int nP)
{
    int start = 0;
    int highestRank = *max_element(ranks.begin(), ranks.end());
    int end = highestRank * (nP * (nP + 1)) / 2;
    int ans = -1;

    while (end >= start)
    {
        int mid = (start + end) >> 1;
        if (isPossible(ranks, nP, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return ans;
}

signed main()
{
    fastio;

    int tc;
    cin >> tc;
    while (tc--)
    {
        int nP, nC;
        cin >> nP >> nC;

        vector<int> cookRanks;

        for (int i = 0; i < nC; i++)
        {
            int ele;
            cin >> ele;
            cookRanks.push_back(ele);
        }

        cout << minTimeToCompleteOrder(cookRanks, nP) << endl;
    }
}