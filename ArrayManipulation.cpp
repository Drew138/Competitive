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

void manip()
{
    ll size, numOps, start, end, value, maxVal = 0, currentVal = 0;
    cin >> size >> numOps;

    vector<ll> manipArray(size, 0);
    for (ll x = 0; x < numOps; ++x)
    {
        cin >> start >> end >> value;
        manipArray[start - 1] += value;
        manipArray[end] += -value;
    }
    for (ll i = 0; i < size; ++i)
    {
        currentVal += manipArray[i];
        maxVal = max(currentVal, maxVal);
    }
    cout << maxVal;
}

int main()
{
    manip();
}
