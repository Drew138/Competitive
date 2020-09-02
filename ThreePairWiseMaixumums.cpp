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
    int numTests;
    cin >> numTests;
    for (int x = 0; x < numTests; ++x)
    {
        int x, y, z;
        cin >> x, y, z;
        if (x != y && y != z && x != z)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<int> a = {x, y, z};
        sort(all(a));
        cout << "YES" << endl;
        cout << a[2] << a[0] << 1 << endl;
    }
}