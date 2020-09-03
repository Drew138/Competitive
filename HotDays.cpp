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
    ll numRegions, numChildren, regTemp, maxTemp, penalty, costBus, numBuses, minCase, maxCase, total = 0;
    cin >> numRegions >> numChildren;
    while (numRegions--)
    {
        cin >> regTemp >> maxTemp >> penalty >> costBus;

        if (maxTemp >= (regTemp + numChildren))
        {
            total += costBus;
        }
        else
        {
            if (regTemp >= maxTemp)
            {
                total += costBus + (numChildren * penalty);
            }
            else
            {
                minCase = costBus + (numChildren * penalty);
                if (numChildren % (maxTemp - regTemp))
                {
                    maxCase = min(costBus * ((numChildren / (maxTemp - regTemp)) + 1), costBus * (numChildren / (maxTemp - regTemp)) + penalty * ((numChildren % (maxTemp - regTemp)) + (maxTemp - regTemp)));
                }
                else
                {
                    maxCase = costBus * ((numChildren / (maxTemp - regTemp)));
                }
                total += min(maxCase, minCase);
            }
        }
    }
    cout << total;
}
