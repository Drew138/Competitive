#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define all(v) v.begin(), v.end()
#define formap(map) for (const auto &[key, value] : map)
#define ms(ar, val) memset(ar, val, sizeof ar)
typedef long long ll;
typedef long double ld;

using namespace std;

int main()
{
    double problems, numWins = 0, numLoss = 0, numEquals = 0;
    cin >> problems;

    double winner[(int)problems];
    double loser[(int)problems];
    for (int x = 0; x < problems; ++x)
    {
        cin >> winner[x];
    }
    for (int k = 0; k < problems; ++k)
    {
        cin >> loser[k];
    }
    for (int i = 0; i < problems; ++i)
    {
        numWins += winner[i] > loser[i];
        numLoss += winner[i] < loser[i];
        numEquals += winner[i] == loser[i];
    }
    if (numWins > numLoss)
    {
        cout << 1 << endl;
    }
    else if (!numWins || numEquals == problems)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ceil((numLoss + 1) / numWins) << endl;
    }
}