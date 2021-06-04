#include <bits/stdc++.h>

#define D(x) cout << #x << " = " << x << endl;
#define ios ios_base::sync_with_stdio(0), cin.tie(0);
#define forn(i, n) for (int i = 0; i < (int)n; ++i)
#define all(v) v.begin(), v.end()
#define allgreater(v) v.begin(), v.end(), greater<int>()
#define formap(map) for (const auto &[key, value] : map)
#define ms(ar, val) memset(ar, val, sizeof ar)
typedef long long ll;
typedef long double ld;

using namespace std;

int main()
{
    int c, k, co = 0, ce = 0, ko = 0, ke = 0, tmp;
    cin >> c >> k;
    while (c)
    {
        cin >> tmp;
        co += tmp % 2;
        ce += tmp % 2 == 0;
        c--;
    }
    while (k)
    {
        cin >> tmp;
        ko += tmp % 2;
        ke += tmp % 2 == 0;
        k--;
    }
    cout << min(ce, ko) + min(co, ke) << endl;
}