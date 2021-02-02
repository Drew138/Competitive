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

void vacations()
{

    int numDays;
    cin >> numDays;
    int days[numDays];
    cin >> days[0];
    int total = 0;
    if (days[0] == 0)
        total++;

    for (int i = 1; i < numDays; ++i)
    {
        cin >> days[i];
        if (days[i] == 3)
        {
            if (days[i - 1] == 1)
                days[i] = 2;
            else if (days[i - 1] == 2)
                days[i] = 1;
            else if (days[i - 1] == 3)
                days[i] = 0;
        }
        else if (days[i] == days[i - 1] || days[i] == 0)
        {
            total++;
            days[i] = 0;
        }
    }
    cout << total;
}

int main()
{
    vacations();
}